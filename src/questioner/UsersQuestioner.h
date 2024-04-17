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
        int qtde;
        string response;
        cout << "Quantos usuarios voce deseja inserir manualmente: ";
        cin >> qtde;

        for(int i=0; i < qtde;i++) {
            User user;

            cout << "Informe nome do usuario: ";
            cin >> user.name;
            cout << "Informe idade do usuario: ";
            cin >> user.age;
            // cout << "Gêneros Disponiveis:";
            // for(int j=0; j < MovieGenre.getSize();j++) {
            //     // talvez n de de usar a funcao ja criada, pq acho q seria necessario uma numeracao juntamente com o genero
            //     // para as escolhas
            // };
            // cout << "Selecione 3 gêneros desejados: ";
            // cin >> response;
            // StringUtils::splitString(response, ',');
            // cout << "===| Filmes para assistir mais tarde: |===";
            // cout << "Selecione:";
            //
            // int k = 1;
            // string navigation;
            // while(navigation != "prosseguir") {
            //     Movies::movies.paginate(10,k);
            //     cout << "Digite:\n Anterior\tPróximo\n (Digite Avançar para prosseguir)";
            //     cin >> navigation;
            //     if(navigation == "próximo") k++;
            //     else if(navigation == "anterior") k--;
            //     else if(navigation == "prosseguir") break;
            //     else {
            //         cout << "Digite o número correspondente ao filme desejado: ";
            //         cin >> k;
            //         // fazer uma funcao que pega o filme pela posicao, onde k é o valor da posicao
            //         // assim, ele vai selecionar um filme no catalogo por numero e vai ser adicionado em user o nome do filme
            //
            //         // insercao: digite um filme e qnd digitado armazena em uma lista e volta para a pagina 1
            //     }
            // }
            // cout << "===| Filmes Favoritos: |===";
            // cout << "Selecione:";
            //
            // int k = 1;
            // string navigation;
            // while(k) {
            //     Movies::movies.paginate(10,k);
            //     cout << "Digite:\n Anterior\tPróximo\n (Digite Avançar para prosseguir)";
            //     cin >> navigation;
            //     if(navigation == "Próximo") k++;
            //     else if(navigation == "Anterior") k--;
            //     else if(navigation == "prosseguir") break;
            //     else {
            //         cout << "Digite o número correspondente ao filme desejado: ";
            //         cin >> k;
            //         // fazer uma funcao que pega o filme pela posicao, onde k é o valor da posicao
            //         // assim, ele vai selecionar um filme no catalogo por numero e vai ser adicionado em user o nome do filme
            //     }
            // }
        }
    }

    inline void askForUserDelete() {

    }


}

#endif //VALIFLIX_USERSQUESTIONER_H
