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
};

struct WatchedMovie {
    Movie movie;
    int rating = 0;
};

std::ostream& operator<<(std::ostream& os, const Movie& movie) {
    os << "Titulo: " << movie.title << std::endl;
    os << "Elenco: " << movie.cast << std::endl;
    os << "Ano: " << movie.year << std::endl;
    os << "--------------------------------" << std::endl;
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
