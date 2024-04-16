//
// Created by Caio on 01/04/2024.
//

#include "utils/StaticList.h"
#include "importer/MovieImporter.h"
#include "populators/UsersPopulator.h"
#include "interface/InterfaceInicial.h"

void execute() {
    cout << "[APP] Iniciando serviço..." << endl;

    MovieImporter::import("../dataset/movies.csv");

    cout << "[APP] Realizando procedimentos para popular dados..." << endl;

    UsersPopulator::populate(50);

    Menu::renderInterfaceInicial();
    Menu::renderInterfaceUsuario();
    Menu::renderInterfaceDeleteUser();

}