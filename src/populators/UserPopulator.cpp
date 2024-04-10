#include "UsersPopulator.h"

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

void populateUsers() {
    populateNames();
    populateLastNames();

    for (int i = 0; i < 100; ++i) {
        Users::User user;

        user.name = listNames.getRandom() + " " + listLastNames.getRandom();
        user.age = rand() % 50 + 18;
        user.rating = rand() % 5;
        // user.genres = genreNamesInPortuguese.getRandom();

        movies.insertAtEnd(user);
    }
}
