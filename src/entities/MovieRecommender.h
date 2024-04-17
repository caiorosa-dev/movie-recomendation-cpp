//
// Created by Caio on 16/04/2024.
//

#ifndef VALIFLIX_MOVIERECOMMENDER_H
#define VALIFLIX_MOVIERECOMMENDER_H

#include "Movies.h"
#include "Users.h"
#include "../utils/InterfaceUtils.h"

using namespace std;

struct RatedGenre {
    MovieGenre genre;
    int points;

    bool operator==(const RatedGenre& other) const {
        return genre == other.genre;
    }
};

std::ostream& operator<<(std::ostream& os, const RatedGenre& ratedGenre) {
    os << getGenreName(ratedGenre.genre) << " " << ratedGenre.points;

    return os;
}

namespace MovieRecommender {
    StaticList<RatedGenre, 100> calculateMovieScores(User user) {
        StaticList<RatedGenre, 100> movieScores;

        for (int i = 0; i < user.favoriteGenres.getSize(); ++i) {
            RatedGenre ratedGenre;
            ratedGenre.genre = user.favoriteGenres.get(i);
            ratedGenre.points = 0;
            movieScores.insertAtEnd(ratedGenre);
        }

        for (int i = 0; i < user.watchedMovies.getSize(); ++i) {
            WatchedMovie watchedMovie = user.watchedMovies.get(i);
            int rating = watchedMovie.rating;

            for (int j = 0; j < movieScores.getSize(); ++j) {
                RatedGenre ratedGenre = movieScores.get(j);
                if (watchedMovie.movie.genres.contains(ratedGenre.genre)) {
                    ratedGenre.points += rating;
                }
            }
        }

        return movieScores;
    }

    StaticList<Movie, 10> recommendMovies(User user) {
        clearConsole();
        cout << endl << "Informacoes do usuario: " << endl;

        cout << endl << "Generos favoritos do usuario: " << endl << endl;
        for (int i = 0; i < user.favoriteGenres.getSize(); ++i) {
            cout << "\t" << getGenreName(user.favoriteGenres.get(i)) << endl;
        }

        cout << endl << "Filmes assistidos pelo usuário e suas notas: " << endl << endl;
        for (int i = 0; i < user.watchedMovies.getSize(); ++i) {
            cout << "\t" << user.watchedMovies.get(i) << endl;
        }

        cout << endl;

        StaticList<Movie, 10> recommendedMovies;
        StaticList<RatedGenre, 100> movieScores = calculateMovieScores(user);

        movieScores.sort([](const RatedGenre& a, const RatedGenre& b) {
            return a.points > b.points;
        });

        for (int i = 0; i < movieScores.getSize() && recommendedMovies.getSize() < 10; ++i) {
            RatedGenre ratedGenre = movieScores.get(i);
            MovieGenre genre = ratedGenre.genre;

            for (int j = 0; j < Movies::movies.getSize(); ++j) {
                Movie movie = Movies::movies.get(j);

                if (movie.genres.contains(genre) && !user.watchList.contains(movie)) {
                    recommendedMovies.insertAtEnd(movie);
                }

                if (recommendedMovies.getSize() >= 10) {
                    break;
                }
            }
        }

        return recommendedMovies;
    }
}

#endif //VALIFLIX_MOVIERECOMMENDER_H
