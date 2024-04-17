//
// Created by Caio on 16/04/2024.
//

#ifndef VALIFLIX_USERSQUESTIONER_H
#define VALIFLIX_USERSQUESTIONER_H

#include "../entities/Users.h"
#include <string>

#include "../utils/StringUtils.h"
#include "../populators/UsersPopulator.h"


using namespace std;
namespace UsersQuestioner {
    void askForPopulate() {
        int populate;
        cout << "\tQuantos usuarios voce quer gerar? "<<endl;
        cin >> populate;
        UsersPopulator::populate(populate);
        cout << endl << "\tUsuarios gerados com sucesso!"<<endl;
    }

    void askForManualUser() {
        int qtde;
        string response;
        cout << "Quantos usuarios voce deseja inserir manualmente: ";
        cin >> qtde;

        for(int i=0; i < qtde;i++) {
            cout << "------------------------------\nCadastrando usuario numero " << i + 1 << endl << endl;
            User user;

            cout << "Informe nome do usuario: ";
            cin >> user.name;
            cout << "Informe idade do usuario: ";
            cin >> user.age;

             cout << endl << "Gêneros Disponiveis:" << endl;
             for(int j=0; j < 23;j++) {
                 MovieGenre currentGenre = MovieGenre(j);

                 cout << "\t" << j + 1 << ". " << getGenreName(currentGenre) << " " << endl;
             };
             cout << "Selecione 3 gêneros desejados dividindo por virgula (Ex: 1,5,2): " ;
             cin >> response;
             StringUtils::splitString(response, ',');
             cout << "===| Filmes para assistir mais tarde: |===";
             cout << "Selecione:";

             int k = 1;
             string navigation;
             while(navigation != "prosseguir") {
//                 Movies::movies.paginate(10,k);
                 cout << "Digite:\n Anterior\tPróximo\n (Digite Avançar para prosseguir)";
                 cin >> navigation;
                 if(navigation == "próximo") k++;
                 else if(navigation == "anterior") k--;
                 else if(navigation == "prosseguir") break;
                 else {
                     cout << "Digite o número correspondente ao filme desejado: ";
                     cin >> k;
                     // fazer uma funcao que pega o filme pela posicao, onde k é o valor da posicao
                     // assim, ele vai selecionar um filme no catalogo por numero e vai ser adicionado em user o nome do filme

                     // insercao: digite um filme e qnd digitado armazena em uma lista e volta para a pagina 1
                 }
             }
             cout << "===| Filmes Favoritos: |===";
             cout << "Selecione:";

//             int k = 1;
//             string navigation;
//             while(k) {
//                 Movies::movies.paginate(10,k);
//                 cout << "Digite:\n Anterior\tPróximo\n (Digite Avançar para prosseguir)";
//                 cin >> navigation;
//                 if(navigation == "Próximo") k++;
//                 else if(navigation == "Anterior") k--;
//                 else if(navigation == "prosseguir") break;
//                 else {
//                     cout << "Digite o número correspondente ao filme desejado: ";
//                     cin >> k;
//                     // fazer uma funcao que pega o filme pela posicao, onde k é o valor da posicao
//                     // assim, ele vai selecionar um filme no catalogo por numero e vai ser adicionado em user o nome do filme
//                 }
//             }
        }
    }

    void askForUserDelete() {

    }
}

#endif //VALIFLIX_USERSQUESTIONER_H
