//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACEINICIAL_H
#define VALIFLIX_INTERFACEINICIAL_H

#include <iostream>
#include "InterfaceOptionType.h"
#include "InterfaceColor.h"

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
        InterfaceColor::set(Color::LIGTH_MAGENTA);
        cout << centerStringInScreen(" __     __    _ _ _____ _ _      ", terminalColumns) <<endl;
        cout << centerStringInScreen(" \\ \\   / /_ _| (_)  ___| (_)_  __", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\ \\ / / _` | | | |_  | | \\ \\/ /", terminalColumns) <<endl;
        cout << centerStringInScreen("   \\ V / (_| | | |  _| | | |>  < ", terminalColumns) <<endl;
        cout << centerStringInScreen("    \\_/ \\__,_|_|_|_|   |_|_/_/\\_\\", terminalColumns) <<endl;
        //cout << centerStringInScreen("                                 ", terminalColumns) <<endl;
        InterfaceColor::reset();
        cout << endl;



    }
}


#endif //VALIFLIX_INTERFACEINICIAL_H
