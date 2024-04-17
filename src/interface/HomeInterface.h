//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_HOMEINTERFACE_H
#define VALIFLIX_HOMEINTERFACE_H

#include <iostream>
#include "../utils/InterfaceUtils.h"
#include "../entities/Users.h"

using namespace std;

namespace Menu{
    int terminalRows, terminalColumns;

    //renderizar o menu de início do jogo
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

    void renderInterfaceInicial() {
        cout << endl << endl;
        cout << centerStringInScreen(" __     __    _ _ _____ _ _      ", terminalColumns) <<endl;
        cout << centerStringInScreen(" \\ \\   / /_ _| (_)  ___| (_)_  __", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\ \\ / / _` | | | |_  | | \\ \\/ /", terminalColumns) <<endl;
        cout << centerStringInScreen("   \\ V / (_| | | |  _| | | |>  < ", terminalColumns) <<endl;
        cout << centerStringInScreen("    \\_/ \\__,_|_|_|_|   |_|_/_/\\_\\", terminalColumns) <<endl;
        cout << centerStringInScreen("            v1.0.0           ", terminalColumns) <<endl;
        cout << endl;
        cout << "\tBem vindo ao FlixVali \n " << endl;

        void options(){
            int option;

            cout << "Digite 0 para acessar os créditos \nDigite 1 para acessar a aba de Usuários \nDigite 2 para sair: ";
            cin >> option;

            if (option == 0){
                renderInterfaceDevs();
            }
            else if (option == 1){
                renderInterfaceUsuario();
            }
            else if (option == 2){
                exit(0);
            }
            else(option < 0 || option > 2){
                cout << "Número inválido! Digite novamente: ";
                options();
            }
        }
    }
}


#endif //VALIFLIX_HOMEINTERFACE_H
