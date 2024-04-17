//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_HOMEINTERFACE_H
#define VALIFLIX_HOMEINTERFACE_H

#include <iostream>
#include "../utils/InterfaceUtils.h"
#include "UserInterface.h"
#include "../entities/MovieRecommender.h"


using namespace std;

namespace Menu{
    //renderizar o menu de início do jogo
    void renderInterfaceDevs() {
        int option = 2;
        while(option != 0){
            clearConsole();

            cout << endl << endl;
            cout << "  ____                                 _               _                     " <<endl;
            cout << " |  _ \\  ___  ___  ___ _ ____   _____ | |_   _____  __| | ___  _ __ ___  ___ " <<endl;
            cout << " | | | |/ _ \\/ __|/ _ \\ '_ \\ \\ / / _ \\| \\ \\ / / _ \\/ _` |/ _ \\| '__/ _ \\/ __|" <<endl;
            cout << " | |_| |  __/\\__ \\  __/ | | \\ V / (_) | |\\ V /  __/ (_| | (_) | | |  __/\\__ \\" <<endl;
            cout << " |____/ \\___||___/\\___|_| |_|\\_/ \\___/|_| \\_/ \\___|\\__,_|\\___/|_|  \\___||___/" <<endl;
            cout << "\tFeito por: Caio Rosa, Jordan Lippert & Joshuah Jackson" <<endl;
            cout << endl;

            cout << "\t1. Voltar para o Menu"<<endl;
            cout << "\t2. Sair"<<endl;
            cout << "\tEscolha uma opcao: ";
            cin >> option;

            switch (option) {
                case 1:
                    return;
                case 2:
                    cout << "\tAte mais!" << endl;
                    exit(0);
                default:
                    cout << "Opcao invalida"<<endl;
            }
        }
    }

    void askForRecomendation() {
        cout << "\tInforme o indice do usuário que você deseja gerar a recomendação: ";
        int userIndex;
        cin >> userIndex;

        User user = Users::users.get(userIndex);

        MovieRecommender::recommendMovies(user).print();

        waitForUserEnter();
    }

    void renderMovieMenu() {
        int option = 5;
        while(option != 0){
            clearConsole();

            cout << endl << endl;
            cout << "  _   _                      _           " <<endl;
            cout << " | | | |___ _   _  __ _ _ __(_) ___  ___ " <<endl;
            cout << " | | | / __| | | |/ _` | '__| |/ _ \\/ __|" <<endl;
            cout << " | |_| \\__ \\ |_| | (_| | |  | | (_) \\__ \\" <<endl;
            cout << "  \\___/|___/\\__,_|\\__,_|_|  |_|\\___/|___/" <<endl;
            cout << endl;

            cout << "\t1. Exibir Filmes" <<endl;
            cout << "\t2. Recomendador" << endl;
            cout << "\t3. Voltar para o Menu" << endl;
            cout << "\tEscolha uma opcao: ";
            cin >> option;
            clearConsole();

            switch (option) {
                case 1:
                    Movies::movies.print();
                    waitForUserEnter();
                    break;
                case 2:
                    askForRecomendation();
                    break;
                case 3:
                    return;
                default:
                    cout << "\tOpcao invalida!" << endl;
                    break;
            }
        }
    }

    void renderMenu() {
        int option = 3;
        while(option != 0) {
            clearConsole();

            cout << endl << endl;
            cout <<" __     __    _ _ _____ _ _      " <<endl;
            cout << " \\ \\   / /_ _| (_)  ___| (_)_  __" <<endl;
            cout << "  \\ \\ / / _` | | | |_  | | \\ \\/ /" <<endl;
            cout << "   \\ V / (_| | | |  _| | | |>  < " <<endl;
            cout << "    \\_/ \\__,_|_|_|_|   |_|_/_/\\_\\" <<endl;
            cout << "            v1.0.0           " <<endl;
            cout << endl;
            cout << "\tBem vindo ao FlixVali \n " << endl;

            cout << "\t1. Abrir menu de Usuarios" << endl;
            cout << "\t2. Abrir menu de Filmes" << endl;
            cout << "\t3. Creditos" << endl;
            cout << "\t0. Sair" << endl;
            cout << "\tEscolha uma opcao: ";
            cin >> option;
            clearConsole();

            switch(option) {
                case 1:
                    UserInterface::renderMenu();
                    break;
                case 2:
                    renderMovieMenu();
                    break;
                case 3:
                    renderInterfaceDevs();
                    break;
                case 0:
                    cout << "Ate mais!" << endl;
                    break;
                default:
                    cout << "Opcao invalida!" << endl;
                    break;
            }
        }
    }
}


#endif //VALIFLIX_HOMEINTERFACE_H
