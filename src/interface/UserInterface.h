//
// Created by Caio on 17/04/2024.
//

#ifndef VALIFLIX_USERINTERFACE_H
#define VALIFLIX_USERINTERFACE_H

#include <iostream>
#include "../utils/InterfaceUtils.h"
#include "../entities/Users.h"
#include "../populators/UsersPopulator.h"
#include "../questioner/UsersQuestioner.h"


using namespace std;

namespace UserInterface {
    void renderMenu() {
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

            cout << "\t1. Exibir Usuarios" <<endl;
            cout << "\t2. Cadastrar Usuario" <<endl;
            cout << "\t3. Gerar Usuario" <<endl;
            cout << "\t4. Deletar Usuarios" <<endl;
            cout << "\t5. Voltar para o Menu" << endl;
            cout << "\tEscolha uma opcao: ";
            cin >> option;
            clearConsole();

            switch (option) {
                case 1:
                    if (Users::users.getSize() > 0) {
                        Users::users.print();
                    } else {
                        cout << endl << "\tNenhum usuario cadastrado!" << endl;
                    }
                    waitForUserEnter();
                    break;
                case 2:
                    UsersQuestioner::askForManualUser();
                    break;
                case 3:
                    UsersQuestioner::askForPopulate();
                    waitForUserEnter();
                    break;
                case 4:
                    cout << "Usuario: Joao bombinha DELETADO"<<endl;
                case 5:
                    return;
                default:
                    cout << "\tOpcao invalida!" << endl;
                    break;
            }
        }
    }
}

#endif //VALIFLIX_USERINTERFACE_H
