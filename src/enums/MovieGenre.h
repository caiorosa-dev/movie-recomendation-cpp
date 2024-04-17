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
    DOCUMENTARY,
    WESTERN,
    IMAX,
    FILM_NOIR,
    WAR
};

std::map<MovieGenre, std::string> genreNamesInPortuguese = {
        {MovieGenre::ACTION, "Ação"},
        {MovieGenre::ANIMATION, "Animação"},
        {MovieGenre::CHILDREN, "Infantis"},
        {MovieGenre::ADVENTURE, "Aventura"},
        {MovieGenre::COMEDY, "Comédia"},
        {MovieGenre::CRIME, "Crime"},
        {MovieGenre::MUSICAL, " Musicais"},
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
        {MovieGenre::DOCUMENTARY, "Documentário"},
        {MovieGenre::WAR, "Guerra"},
        {MovieGenre::FILM_NOIR, "Filme Noir"},
        {MovieGenre::WESTERN, "Faroeste"},
        {MovieGenre::IMAX, "IMAX"}
};

std::map<MovieGenre, std::string> genreNamesInEnglish = {
        {MovieGenre::ACTION, "Action"},
        {MovieGenre::ANIMATION, "Animation"},
        {MovieGenre::CHILDREN, "Children"},
        {MovieGenre::ADVENTURE, "Adventure"},
        {MovieGenre::COMEDY, "Comedy"},
        {MovieGenre::CRIME, "Crime"},
        {MovieGenre::MUSICAL, "Musical"},
        {MovieGenre::DRAMA, "Drama"},
        {MovieGenre::FANTASY, "Fantasy"},
        {MovieGenre::HISTORICAL, "Historical"},
        {MovieGenre::HORROR, "Horror"},
        {MovieGenre::MYSTERY, "Mystery"},
        {MovieGenre::PHILOSOPHICAL, "Philosophical"},
        {MovieGenre::POLITICAL, "Political"},
        {MovieGenre::ROMANCE, "Romance"},
        {MovieGenre::SATIRE, "Satire"},
        {MovieGenre::SCIENCE_FICTION, "Sci-Fi"},
        {MovieGenre::THRILLER, "Thriller"},
        {MovieGenre::URBAN, "Urban"},
        {MovieGenre::DOCUMENTARY, "Documentary"},
        {MovieGenre::WAR, "War"},
        {MovieGenre::WESTERN, "Western"},
        {MovieGenre::FILM_NOIR, "Film-Noir"},
        {MovieGenre::IMAX, "IMAX"}
};

std::string getGenreName(MovieGenre genre) {
    return genreNamesInPortuguese[genre];
}

MovieGenre getGenreFromEnglishName(const std::string& name) {
    for (const auto& pair : genreNamesInEnglish) {
        if (pair.second == name) {
            return pair.first;
        }
    }

    throw std::invalid_argument("Gênero não encontrado: " + name);
}

#endif //VALIFLIX_MOVIEGENRE_H
