//
// Created by Caio on 09/04/2024.
//

#ifndef VALIFLIX_MOVIES_H
#define VALIFLIX_MOVIES_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"

/*
 * Movie struct
 */
struct Movie {
    std::string title;
    std::string cast;
    StaticList<MovieGenre, 10> genres;
    int year = 0;

    bool operator==(const Movie& other) const {
        return title == other.title &&
               cast == other.cast &&
               year == other.year;
    }
};

struct WatchedMovie {
    Movie movie;
    int rating = 0;

    bool operator==(const WatchedMovie& other) const {
        return movie == other.movie && rating == other.rating;
    }
};

std::ostream& operator<<(std::ostream& os, const WatchedMovie& watchedMovie) {
    os << watchedMovie.movie.title << " | Nota: " << watchedMovie.rating;
    return os;
}

std::ostream& operator<<(std::ostream& os, const Movie& movie) {
    os << movie.title;
    return os;
}

/*
 * Movie entity
 */
namespace Movies {
    StaticList<Movie, 500> movies;

    /*
     * Initialize a movie
     */
    Movie initMovie(std::string title, std::string cast, int year) {
        Movie movie;

        movie.title = title;
        movie.cast = cast;
        movie.year = year;

        return movie;
    }

    /*
     * Add a genre to a movie
     */
    void addGenre(Movie& movie, MovieGenre genre) {
        movie.genres.insertAtEnd(genre);
    }
}

#endif //VALIFLIX_MOVIES_H
