//
// Created by Caio on 09/04/2024.
//

#ifndef VALIFLIX_MOVIEIMPORTER_H
#define VALIFLIX_MOVIEIMPORTER_H

#include <iostream>
#include <fstream>
#include "../utils/StaticList.h"
#include "../entities/Movies.h"
#include "../utils/StringUtils.h"

using namespace std;

namespace MovieImporter {
    void import(const string& fileName) {
        std::cout << "[MovieImporter] Importando filmes..." << std::endl;

        ifstream file;

        file.open(fileName);

        string currentLine;
        int line = 0;
        while(Movies::movies.getSize() < 500) {
            line++;
            if (line <= 2) continue;

            getline(file, currentLine);

            if(currentLine.empty()) {
                break;
            }

            vector<string> movieData = StringUtils::splitString(currentLine, ',');

            if (movieData.size() < 2 || movieData[1] == "title") {
                continue;
            }

            string title = movieData[1];
            int year = StringUtils::extractIntFromString(movieData[1]);

            string cast = "N/A";

            Movie newMovie = Movies::initMovie(title, cast, year);

            Movies::movies.insertAtEnd(newMovie);
        }

        std::cout << "[MovieImporter] Filmes importados e processados." << std::endl;
    }
}

#endif //VALIFLIX_MOVIEIMPORTER_H
