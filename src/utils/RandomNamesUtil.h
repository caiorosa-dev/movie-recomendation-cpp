//
// Created by Caio on 16/04/2024.
//

#ifndef VALIFLIX_RANDOMNAMESUTIL_H
#define VALIFLIX_RANDOMNAMESUTIL_H

#include <string>
#include "StaticList.h"

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

std::string getRandomName() {
    return listNames.getRandom() + " " + listLastNames.getRandom();
}

#endif //VALIFLIX_RANDOMNAMESUTIL_H
