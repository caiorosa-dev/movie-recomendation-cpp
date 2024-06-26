//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACEUTILS_H
#define VALIFLIX_INTERFACEUTILS_H

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/**
 * Retorna uma string contendo espaços em branco para centralizar o texto.
 * @param str A string a ser centralizada.
 * @param size O tamanho total desejado.
 * @return A string com espaços em branco adicionados à esquerda para centralizar o texto.
 */
string getNecessarySpacesToCenter(string str, int size) {
    int strLength = str.length();
    int spaces = (size - strLength) / 2;
    string newString;

    for (int i = 0; i < spaces; ++i) {
        newString += " ";
    }

    return newString;
}

void clearConsole() {
    system("cls");
}

void waitForUserEnter() {
    cout << endl << "\tPressione ENTER para continuar...";
    cin.ignore();
    cin.get();
}

string generateSpaces(int spacesAmount) {
    string newString;

    for (int i = 0; i < spacesAmount; ++i) {
        newString += " ";
    }

    return newString;
}

/**
 * Centraliza uma string no meio da tela com espaços em branco adicionados à esquerda.
 * @param str A string a ser centralizada.
 * @param size O tamanho total desejado.
 * @return A string centralizada no meio da tela.
 */
string centerStringInScreen(string str, int size, bool withTrailingSpaces = true) {
    string newString = getNecessarySpacesToCenter(str, size);
    newString += str;
    if (withTrailingSpaces) newString += "       ";
    return newString;
}


#endif //VALIFLIX_INTERFACEUTILS_H
