//
// Created by Jordan on 13/04/2024.
//

#ifndef VALIFLIX_INTERFACECOLOR_H
#define VALIFLIX_INTERFACECOLOR_H

#include <iostream>
#include <windows.h>

enum class Color {
    CYAN = 3,
    RED = 4,
    LIGHT_BLUE = 9,
    LIGTH_MAGENTA = 13,
    WHITE = 15,
};

enum class BackgroundColor{
    BLACK = 0,
};

namespace InterfaceColor{
        //interface (abreviado)
    HANDLE intfc = GetStdHandle(STD_OUTPUT_HANDLE);

    void set (Color color, BackgroundColor bgColor = BackgroundColor::BLACK) {
        SetConsoleTextAttribute(intfc, int(color) + int(bgColor));
    }

    void reset() {
        SetConsoleTextAttribute(intfc, 7);
    }

}


#endif //VALIFLIX_INTERFACECOLOR_H
