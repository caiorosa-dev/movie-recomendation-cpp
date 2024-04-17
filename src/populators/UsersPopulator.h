#ifndef USERSPOPULATOR_H
#define USERSPOPULATOR_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"
#include "../entities/Users.h"

using namespace std;

namespace UsersPopulator {
    void populate(int amount, int amountOfWatchList, int amountOfWatchedMovies) {
        cout << "[UsersPopulator] Iniciando geração de usuários (quantidade: " << amount <<")..." << endl;

        for (int i = 0; i < amount; ++i) {
            User user;

            user.name = listNames.getRandom() + " " + listLastNames.getRandom();
            user.age = rand() % 50 + 18;

            StaticList<MovieGenre, 3> genres;
            for (int j = 0; j < rand() % 2 + 1; ++j) {
                genres.insertAtEnd(MovieGenre(rand() % 23));
            }
            user.favoriteGenres = genres;

            for(int j = 0; j < amountOfWatchedMovies; j++)
                user.watchedMovies.insertAtEnd({Movies::movies.getRandom(), rand() % 4 + 1});

            for(int k = 0; k < amountOfWatchList; k++)
                user.watchList.insertAtEnd(Movies::movies.getRandom());

            Users::users.insertAtEnd(user);
        }

        cout << "[UsersPopulator] Geração de usuários concluída." << endl;
    }
}

#endif // USERSPOPULATOR_H
