//
// Created by Caio on 16/04/2024.
//

#ifndef VALIFLIX_USERSQUESTIONER_H
#define VALIFLIX_USERSQUESTIONER_H

#include "../entities/Users.h"
#include <string>

#include "../utils/StringUtils.h"


using namespace std;
namespace UsersQuestioner {
    void askForUser();
    void askForUserDelete();

    inline void askForUser() {
        string response;
        cout << "Quantos usuarios voce deseja inserir manualmente: ";
        cin >> quantidade;

        for(int i=0; i < quantidade;i++) {
            User user;

            cout << "Informe nome do usuario: ";
            cin >> user.name;
            cout << "Informe idade do usuario: ";
            cin >> user.age;
            cout << "Gêneros Disponiveis:";
            for(int j=0; j < MovieGenre.getSize();j++) {

            };
            cout << "Selecione 3 gêneros desejados: ";
            cin >> response;
            StringUtils::splitString(response, ',');
            // fazer paginacao do catalogo
            cout << "Cátalogo de filmes: ";

            int k = 1;
            string navigation;
            while(k) {
                Movies::movies.paginate(10,k);
                cout << "1 - Anterior\t 2 - Próximo";
                cin >> navigation;
                if(navigation == "Próximo") {
                    k++;
                    continue;
                }
                else if(navigation == "Anterior") {
                    k--;
                    continue;
                }
                else {
                    cout << "Digite o número correspondente ao filme desejado: ";
                    cin >> k;
                }
            }
        }
    }

    inline void askForUserDelete() {

    }


}

#endif //VALIFLIX_USERSQUESTIONER_H
