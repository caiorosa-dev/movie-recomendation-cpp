//
// Created by Caio on 01/04/2024.
//

#ifndef VALIFLIX_MOVIEGENRE_H
#define VALIFLIX_MOVIEGENRE_H

// adicione um campo que tenha os nomes em portugues de cada genero

#include <map>
#include <string>
#include <stdexcept>

enum class MovieGenre {
    ACTION,
    ANIMATION,
    CHILDREN,
    ADVENTURE,
    COMEDY,
    CRIME,
    MUSICAL,
    DRAMA,
    FANTASY,
    HISTORICAL,
    HORROR,
    MYSTERY,
    PHILOSOPHICAL,
    POLITICAL,
    ROMANCE,
    SATIRE,
    SCIENCE_FICTION,
    THRILLER,
    URBAN,
    WESTERN,
    WAR
};

std::map<MovieGenre, std::string> genreNamesInPortuguese = {
        {MovieGenre::ACTION, "Ação"},
        {MovieGenre::ADVENTURE, "Aventura"},
        {MovieGenre::COMEDY, "Comédia"},
        {MovieGenre::CRIME, "Crime"},
        {MovieGenre::DRAMA, "Drama"},
        {MovieGenre::FANTASY, "Fantasia"},
        {MovieGenre::HISTORICAL, "Histórico"},
        {MovieGenre::HORROR, "Terror"},
        {MovieGenre::MYSTERY, "Mistério"},
        {MovieGenre::PHILOSOPHICAL, "Filosófico"},
        {MovieGenre::POLITICAL, "Político"},
        {MovieGenre::ROMANCE, "Romance"},
        {MovieGenre::SATIRE, "Sátira"},
        {MovieGenre::SCIENCE_FICTION, "Ficção Científica"},
        {MovieGenre::THRILLER, "Suspense"},
        {MovieGenre::URBAN, "Urbano"},
        {MovieGenre::WESTERN, "Faroeste"}
};

std::string getGenreName(MovieGenre genre) {
    return genreNamesInPortuguese[genre];
}

#endif //VALIFLIX_MOVIEGENRE_H
