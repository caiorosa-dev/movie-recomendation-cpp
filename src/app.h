//
// Created by Caio on 01/04/2024.
//

#include "utils/StaticList.h"
#include "importer/MovieImporter.h"

void execute() {
    MovieImporter::import("../dataset/movies.csv");

    Movies::movies.print();
}