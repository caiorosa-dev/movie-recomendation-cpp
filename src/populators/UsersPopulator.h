#ifndef USERSPOPULATOR_H
#define USERSPOPULATOR_H

#include <string>
#include "../enums/MovieGenre.h"
#include "../utils/StaticList.h"

namespace UsersPopulator {

    struct UsersPopulator {
        std::string name;
        StaticList<MovieGenre, 5> genres;
        int age;
        int rating;
    };

    void populateUsers();
}

#endif // USERSPOPULATOR_H
