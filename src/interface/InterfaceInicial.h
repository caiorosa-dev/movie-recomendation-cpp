//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACEINICIAL_H
#define VALIFLIX_INTERFACEINICIAL_H

#include <iostream>
#include "InterfaceOptionType.h"
#include "StringInterface.h"

using namespace std;

namespace Menu{
    int terminalRows, terminalColumns;

    int selectedOption = 0;
    int maxOption = 5;
    InterfaceOptionType currentOptionType;

    //renderizar as opções do menu
    /**
    void renderOptions(vector<InterfaceOptionType> options, Color focusColor = Color::RED){
        maxOption = options.size() - 1;

        for (int i = 0; i < options.size(); ++i) {
            InterfaceOptionType current = options[i];

            string text;

            if (selectedOption == 1) {
                text += char(175);
                text += " ";
                currentOptionType = current;
            }

            text += getTextFromType(current);

            cout << endl << endl << getNecessarySpacesToCenter(text, terminalColumns);

            if (selectedOption == 1) {
                InterfaceColor::set(focusColor);
            } else {
                InterfaceColor::set(Color::WHITE);
            }

            cout << text;
            InterfaceColor::reset();
            cout << "     ";
        }
    } */

    //renderizar o menu de início do jogo
    void renderInterfaceInicial() {
        cout << endl << endl;
        cout << centerStringInScreen(" __     __    _ _ _____ _ _      ", terminalColumns) <<endl;
        cout << centerStringInScreen(" \\ \\   / /_ _| (_)  ___| (_)_  __", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\ \\ / / _` | | | |_  | | \\ \\/ /", terminalColumns) <<endl;
        cout << centerStringInScreen("   \\ V / (_| | | |  _| | | |>  < ", terminalColumns) <<endl;
        cout << centerStringInScreen("    \\_/ \\__,_|_|_|_|   |_|_/_/\\_\\", terminalColumns) <<endl;
        //cout << centerStringInScreen("                                 ", terminalColumns) <<endl;
        cout << endl;
    }

    void renderInterfaceUsuario() {
        cout << endl << endl;
        cout << centerStringInScreen("  _   _                      _           ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | |___ _   _  __ _ _ __(_) ___  ___ ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | / __| | | |/ _` | '__| |/ _ \\/ __|", terminalColumns) <<endl;
        cout << centerStringInScreen(" | |_| \\__ \\ |_| | (_| | |  | | (_) \\__ \\", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\___/|___/\\__,_|\\__,_|_|  |_|\\___/|___/", terminalColumns) <<endl;
        //cout << centerStringInScreen("                                 ", terminalColumns) <<endl;
        cout << endl;
    }

    void renderInterfaceDevs() {
        cout << endl << endl;
        cout << centerStringInScreen("  ____                                 _               _                     ", terminalColumns) <<endl;
        cout << centerStringInScreen(" |  _ \\  ___  ___  ___ _ ____   _____ | |_   _____  __| | ___  _ __ ___  ___ ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | |/ _ \\/ __|/ _ \\ '_ \\ \\ / / _ \\| \\ \\ / / _ \\/ _` |/ _ \\| '__/ _ \\/ __|", terminalColumns) <<endl;
        cout << centerStringInScreen(" | |_| |  __/\\__ \\  __/ | | \\ V / (_) | |\\ V /  __/ (_| | (_) | | |  __/\\__ \\", terminalColumns) <<endl;
        cout << centerStringInScreen(" |____/ \\___||___/\\___|_| |_|\\_/ \\___/|_| \\_/ \\___|\\__,_|\\___/|_|  \\___||___/", terminalColumns) <<endl;
        //cout << centerStringInScreen("                                 ", terminalColumns) <<endl;
        cout << endl;
    }

    void renderInterfaceDeleteUser() {
        cout << endl << endl;
        cout << centerStringInScreen("  ____       _      _               _   _                      _       ", terminalColumns) <<endl;
        cout << centerStringInScreen(" |  _ \\  ___| | ___| |_ __ _ _ __  | | | |___ _   _  __ _ _ __(_) ___  ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | |/ _ \\ |/ _ \\ __/ _` | '__| | | | / __| | | |/ _` | '__| |/ _ \\ ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | |_| |  __/ |  __/ || (_| | |    | |_| \\__ \\ |_| | (_| | |  | | (_) |", terminalColumns) <<endl;
        cout << centerStringInScreen(" |____/ \\___|_|\\___|\\__\\__,_|_|     \\___/|___/\\__,_|\\__,_|_|  |_|\\___/ ", terminalColumns) <<endl;
        //cout << centerStringInScreen("                                 ", terminalColumns) <<endl;
        cout << endl;
    }
}


#endif //VALIFLIX_INTERFACEINICIAL_H
