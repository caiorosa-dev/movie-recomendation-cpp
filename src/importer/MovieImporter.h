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

/*
 * Importador de filmes
 */
namespace MovieImporter {
    /**
     * Importa os filmes de um arquivo CSV
     * @param fileName Nome do arquivo CSV
     */
    void import(const string& fileName) {
        std::cout << "[MovieImporter] Importando filmes..." << std::endl;

        ifstream file;

        file.open(fileName);

        string currentLine;
        int line = 0;
        while(Movies::movies.getSize() < 500) {
            getline(file, currentLine);

            if(currentLine.empty()) {
                break;
            }

            line++;
            if (line < 1) continue;

            vector<string> movieData = StringUtils::splitString(currentLine, ',');

            if (movieData.size() < 2) {
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
