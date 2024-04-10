//
// Created by Caio on 09/04/2024.
//

#ifndef VALIFLIX_STRINGUTILS_H
#define VALIFLIX_STRINGUTILS_H

#ifndef BOMBERVALI_STRINGUTILS_H
#define BOMBERVALI_STRINGUTILS_H

#include <string>
#include <vector>
#include <sstream>

using namespace std;

namespace StringUtils {
    vector<string> splitString(const string& text, char delimiter) {
        stringstream stream(text);
        string currentString;
        vector<string> list;

        while (getline(stream, currentString, delimiter)){
            list.push_back(currentString);
        }

        return list;
    }

    int extractIntFromString(const string& str) {
        string intStr;

        for (char c : str) {
            if (isdigit(c)) {
                intStr += c;
            }
        }

        if (intStr.empty()) {
            return 0;
        }

        int extractedInt = stoi(intStr);

        return extractedInt;
    }

    int toInt(const string& numberString) {
        int value = stoi(numberString);

        return value;
    }

    bool contains(const std::string& str, char targetChar) {
        return str.find(targetChar) != std::string::npos;
    }
}

#endif //BOMBERVALI_STRINGUTILS_H


#endif //VALIFLIX_STRINGUTILS_H
