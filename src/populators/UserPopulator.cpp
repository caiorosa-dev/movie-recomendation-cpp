#include "UsersPopulator.h"

StaticList<String, 10> listNames;
StaticList<String, 10> listLastNames;

void populateNames() {
    listNames.add("Sofia");
    listNames.add("Mateus");
    listNames.add("Isabela");
    listNames.add("Gabriel");
    listNames.add("Laura");
    listNames.add("Lucas");
    listNames.add("Giovanna");
    listNames.add("Pedro");
    listNames.add("Maria");
    listNames.add("João");
}

void populateLastNames() {
    listLastNames.add("Silva");
    listLastNames.add("Santos");
    listLastNames.add("Oliveira");
    listLastNames.add("Pereira");
    listLastNames.add("Costa");
    listLastNames.add("Martins");
    listLastNames.add("Ferreira");
    listLastNames.add("Rodrigues");
    listLastNames.add("Almeida");
    listLastNames.add("Carvalho");
}

void populateUsers() {
    populateNames();
    populateLastNames();

    for (int i = 0; i < 100; ++i) {
        UsersPopulator user;
        user.name = listNames.getRandom() + " " + listLastNames.getRandom();
        user.age = rand() % 70;
        user.rating = rand() % 5;
        // user.genres = genreNamesInPortuguese.getRandom();

        movies.add(user);
    }
}
