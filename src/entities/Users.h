//
// Created by Caio on 10/04/2024.
//

#ifndef VALIFLIX_USERS_H
#define VALIFLIX_USERS_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"
#include "Movies.h"

struct User {
    std::string name;
    int age;
    StaticList<Movie, 50> watchList;
    StaticList<MovieGenre, 3> favoriteGenres;
    StaticList<WatchedMovie, 20> watchedMovies;
};

std::ostream& operator<<(std::ostream& os, const User& user) {
    os << "Nome: " << user.name << std::endl;
    os << "Idade: " << user.age << std::endl;
    os << "Quantidade de filmes para assistir: " << user.watchList.getSize() << std::endl;
    os << "Quantidade de generos favoritos: " << user.favoriteGenres.getSize() << std::endl;
    os << "Quantidade de filmes assistidos: " << user.watchedMovies.getSize() << std::endl;
    os << "--------------------------------" << std::endl;
    return os;
}

namespace Users {
    StaticList<User, 100> users;
}

switch(pressedKey){
    case 72: /** cima */
        if(IntefaceManager::canMove(row - 1, column)){
            row--;
        }
        break;
    case 80: /** baixo */
        if(InterfaceManager::canMove(row + 1, column)){
            row++;
        }
        break;
}

#endif //VALIFLIX_USERS_H
