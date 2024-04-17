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
        cout << centerStringInScreen("\tFeito por: Caio Rosa, Jordan Lippert & Joshuah Jackson                                 ", terminalColumns) <<endl;
        cout << endl;
    }

    void renderInterfaceUsuario() {
        cout << endl << endl;
        cout << centerStringInScreen("  _   _                      _           ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | |___ _   _  __ _ _ __(_) ___  ___ ", terminalColumns) <<endl;
        cout << centerStringInScreen(" | | | / __| | | |/ _` | '__| |/ _ \\/ __|", terminalColumns) <<endl;
        cout << centerStringInScreen(" | |_| \\__ \\ |_| | (_| | |  | | (_) \\__ \\", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\___/|___/\\__,_|\\__,_|_|  |_|\\___/|___/", terminalColumns) <<endl;
        cout << endl;

        int option = 4;
        while(option != 0){
            cout << "\t1. Exibir Usuários" <<endl;
            cout << "\t2. Cadastrar Usuários" <<endl;
            cout << "\t3. Deletar Usuários" <<endl;
            cout << "\t4. Voltar por Menu" << endl;
            cout << "\tEscolha uma opção: ";
            cin >> option;

            if (option == 1){

                break;
            }
            else if (option == 2){

                break;
            }
            else if (option == 3){

                break;
            }
            else if (option == 4){
                return;
            }
            else{
                cout << "\tOpção inválida!" << endl;
            }
        }
    }

    void renderMenu() {
        cout << endl << endl;
        cout << centerStringInScreen(" __     __    _ _ _____ _ _      ", terminalColumns) <<endl;
        cout << centerStringInScreen(" \\ \\   / /_ _| (_)  ___| (_)_  __", terminalColumns) <<endl;
        cout << centerStringInScreen("  \\ \\ / / _` | | | |_  | | \\ \\/ /", terminalColumns) <<endl;
        cout << centerStringInScreen("   \\ V / (_| | | |  _| | | |>  < ", terminalColumns) <<endl;
        cout << centerStringInScreen("    \\_/ \\__,_|_|_|_|   |_|_/_/\\_\\", terminalColumns) <<endl;
        cout << centerStringInScreen("            v1.0.0           ", terminalColumns) <<endl;
        cout << endl;
        cout << "\tBem vindo ao FlixVali \n " << endl;

        int option = 3;
        while(option != 0) {
            cout << "\t1. Entrar" << endl;
            cout << "\t2. Créditos" << endl;
            cout << "\t0. Sair" << endl;
            cout << "\tEscolha uma opção: ";
            cin >> option;

            switch(option) {
                case 1:
                    renderInterfaceUsuario();
                    break;
                case 2:
                    renderInterfaceDevs();
                    break;
                case 0:
                    cout << "\tAté mais!" << endl;
                    break;
                default:
                    cout << "\tOpção inválida!" << endl;
                    break;
            }
        }
    }
}


#endif //VALIFLIX_HOMEINTERFACE_H
