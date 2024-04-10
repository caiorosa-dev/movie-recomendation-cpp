//
// Created by Jordan on 09/04/2024.
//

#ifndef VALIFLIX_USERS_H
#define VALIFLIX_USERS_H

#include <string>
#include "../utils/StaticList.h"
#include "../enums/MovieGenre.h"
#include "../entities/Movies.h"


using namespace std;

namespace Users{

    struct User{
        string name;
        int age;
        StaticList<MovieGenre, 3> genres;
        int movieRewiew;
    };

    void watchedMovie(Movies::Movie movie, int rewiew){
        if(rewiew < 0 || rewiew > 5){
            cout << "Avaliacao invalida";
            return;
        }
    }

}


#endif //VALIFLIX_USERS_H
