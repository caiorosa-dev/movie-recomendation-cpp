//
// Created by Caio on 09/04/2024.
//

#ifndef VALIFLIX_MOVIES_H
#define VALIFLIX_MOVIES_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"

/*
 * Movie entity
 */
namespace Movies {
    /*
     * Movie struct
     */
    struct Movie {
        std::string title;
        StaticList<MovieGenre, 10> genres;
        std::string cast;
        int year;
    };

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
     * Add a movie to the list
     */
    void addMovie(Movie movie) {
        movies.insertAtEnd(movie);
    }

    /*
     * Get a movie by index
     */
    Movie getMovie(int index) {
        return movies.get(index);
    }

    /*
     * Add a genre to a movie
     */
    void addGenre(Movie& movie, MovieGenre genre) {
        movie.genres.insertAtEnd(genre);
    }
}

#endif //VALIFLIX_MOVIES_H
