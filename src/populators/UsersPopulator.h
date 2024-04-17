#ifndef USERSPOPULATOR_H
#define USERSPOPULATOR_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"
#include "../entities/Users.h"

using namespace std;

StaticList<string, 10> listNames;
StaticList<string, 10> listLastNames;

void populateNames() {
    listNames.insertAtEnd("Sofia");
    listNames.insertAtEnd("Mateus");
    listNames.insertAtEnd("Isabela");
    listNames.insertAtEnd("Gabriel");
    listNames.insertAtEnd("Laura");
    listNames.insertAtEnd("Lucas");
    listNames.insertAtEnd("Giovanna");
    listNames.insertAtEnd("Pedro");
    listNames.insertAtEnd("Maria");
    listNames.insertAtEnd("João");
}

void populateLastNames() {
    listLastNames.insertAtEnd("Silva");
    listLastNames.insertAtEnd("Santos");
    listLastNames.insertAtEnd("Oliveira");
    listLastNames.insertAtEnd("Pereira");
    listLastNames.insertAtEnd("Costa");
    listLastNames.insertAtEnd("Martins");
    listLastNames.insertAtEnd("Ferreira");
    listLastNames.insertAtEnd("Rodrigues");
    listLastNames.insertAtEnd("Almeida");
    listLastNames.insertAtEnd("Carvalho");
}

namespace UsersPopulator {
    void populate(int amount = 100) {
        cout << "[UsersPopulator] Iniciando geração de usuários (quantidade: " << amount <<")..." << endl;
        populateNames();
        populateLastNames();

        for (int i = 0; i < amount; ++i) {
            User user;

            user.name = listNames.getRandom() + " " + listLastNames.getRandom();
            user.age = rand() % 50 + 18;

            StaticList<MovieGenre, 3> genres;
            for (int j = 0; j < rand() % 2; ++j) {
                genres.insertAtEnd(MovieGenre(rand() % 19));
            }
            user.favoriteGenres = genres;

            for(int j = 0; j < user.watchedMovies.getSize(); j++)
                user.watchedMovies.insertAtEnd({Movies::movies.getRandom(), rand() % 5});

            for(int k = 0; k < user.watchList.getSize(); k++)
                user.watchList.insertAtEnd(Movies::movies.getRandom());

            Users::users.insertAtEnd(user);
        }

        cout << "[UsersPopulator] Geração de usuários concluída." << endl;
    }
}

#endif // USERSPOPULATOR_H
