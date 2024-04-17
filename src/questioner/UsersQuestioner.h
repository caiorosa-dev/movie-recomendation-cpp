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
        cout << "\tQuantos usuarios voce quer gerar (digite um número)? "<<endl;
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
             cout << "=========| Assistir Mais Tarde: |=========";

             int page = 1;
             int navigation = -1;
            while(navigation != 4) {
                Movies::movies.paginate(10,page);
                cout << "Digite:\n 1 - Anterior\t 2 - Próximo\t 3 - selecionar filme\t 4 - avançar\n";
                cin >> navigation;
                switch (navigation) {
                    case 1:
                        page++;
                        break;
                    case 2:
                        page--;
                        break;
                    case 3:
                        cout << "Digite o número correspondente ao filme desejado: ";
                        int index;
                        cin >> index;
                        user.watchList.insertAtEnd(Movies::movies.get(index - 1));
                        index = 0;
                        break;
                    default:
                        cout << "Opcao invalida";
                        break;
                }
            }
             cout << "=========| Filmes Favoritos: |=========\n\tSelecione:";

            navigation = -1;
            page = 1;
             while(navigation != 4) {
                 Movies::movies.paginate(10,page);
                 cout << "Digite:\n 1 - Anterior\t 2 - Próximo\t 3 - selecionar filme\t 4 - avançar\n";
                 cin >> navigation;
                 cin.ignore();
                 switch (navigation) {
                     case 1:
                         page++;
                         break;
                     case 2:
                         page--;
                         break;
                     case 3:
                         cout << "Digite o número correspondente ao filme desejado: ";
                         int index;
                         cin >> index;
                         user.watchList.insertAtEnd(Movies::movies.get(index - 1));
                         index = 0;
                         break;
                     default:
                         cout << "Opcao invalida";
                         break;
                 }
             }
            cout << "=========| Filmes Assistidos: |=========\n\tSelecione:";

            navigation = -1;
            page = 1;
            while(navigation != 4) {
                Movies::movies.paginate(10,page);
                cout << "Digite:\n 1 - Anterior\t 2 - Próximo\t 3 - selecionar filme\t 4 - avançar\n";
                cin >> navigation;
                cin.ignore();
                switch (navigation) {
                    case 1:
                        page++;
                        break;
                    case 2:
                        page--;
                        break;
                    case 3:
                        cout << "Digite o número correspondente ao filme desejado: ";
                        int index, rating;
                        cin >> index;
                        do {
                            cout << "Avaliacao dada a este filme: ";
                            cin >> rating;
                        } while(rating < 0 || rating > 6);

                        user.watchedMovies.insertAtEnd({Movies::movies.get(index - 1), rating});
                        index = 0;
                        break;
                    default:
                        cout << "Opcao invalida";
                        break;
                }
            }
        }
    }

    void askForUserDelete() {

    }
}

#endif //VALIFLIX_USERSQUESTIONER_H
