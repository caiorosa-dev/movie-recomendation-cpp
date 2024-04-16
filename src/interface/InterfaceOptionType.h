//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACEOPTIONTYPE_H
#define VALIFLIX_INTERFACEOPTIONTYPE_H

#include <string>

enum class InterfaceOptionType {
    USERS,
    CREATE_USER,
    DELETE_USER,
    DEVS,
    EXIT,
};

std::string getTextFromType(InterfaceOptionType type){
    switch (type) {
        case InterfaceOptionType::USERS: {
            return "Usuarios";
        }
        case InterfaceOptionType::CREATE_USER: {
            return "Cadastrar Novo Usuario";
        }
        case InterfaceOptionType::DELETE_USER: {
            return "Deletar Usuario";
        }
        case InterfaceOptionType::DEVS: {
            return "Desenvolvedores";
        }
        case InterfaceOptionType::EXIT: {
            return "Sair";
        }
    }

    return "PLACEHOLDER_TEXT";

}


#endif //VALIFLIX_INTERFACEOPTIONTYPE_H
