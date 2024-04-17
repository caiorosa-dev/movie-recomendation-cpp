//
// Created by Caio on 01/04/2024.
//

#include "utils/StaticList.h"
#include "importer/MovieImporter.h"
#include "populators/UsersPopulator.h"
#include "interface/HomeInterface.h"

void execute() {
    cout << "[APP] Iniciando serviço..." << endl;

    populateNames();
    populateLastNames();

    MovieImporter::import("../dataset/movies.csv");

    Movies::movies.print();

    cout << "[APP] Realizando procedimentos para popular dados..." << endl;

    UsersPopulator::populate(50);

    Users::users.print();

    Menu::renderMenu();
}