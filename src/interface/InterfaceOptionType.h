//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACEOPTIONTYPE_H
#define VALIFLIX_INTERFACEOPTIONTYPE_H

#include <string>

enum class InterfaceOptionType {
    USUARIOS, /** LIGHT_BLUE */
    NOVO_USUARIO, /** WHITE */
    DELETAR_USUARIO, /** RED */
    CREDITOS, /** CYAN */
    SAIR,
};

std::string getTextFromType(InterfaceOptionType type){
    switch (type) {
        case InterfaceOptionType::USUARIOS: {
            return "Usuarios";
        }
        case InterfaceOptionType::NOVO_USUARIO: {
            return "Cadastrar Novo Usuario";
        }
        case InterfaceOptionType::DELETAR_USUARIO: {
            return "Deletar Usuario";
        }
        case InterfaceOptionType::CREDITOS: {
            return "Desenvolvedores";
        }
        case InterfaceOptionType::SAIR: {
            return "Sair";
        }
    }

    return "PLACEHOLDER_TEXT";

}


#endif //VALIFLIX_INTERFACEOPTIONTYPE_H
