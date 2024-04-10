//
// Created by Caio on 01/04/2024.
//

#include "utils/StaticList.h"
#include "importer/MovieImporter.h"
#include "utils/ConsoleColors.h"

void execute() {
    ConsoleColor::set(Color::LIGHT_MAGENTA);
    cout << "[APP] Iniciando serviço..." << endl;

    ConsoleColor::set(Color::LIGHT_BLUE);
    MovieImporter::import("../dataset/movies.csv");

    ConsoleColor::set(Color::LIGHTGRAY);
    Movies::movies.print();
}