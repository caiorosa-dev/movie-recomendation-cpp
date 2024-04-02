//
// Created by Caio on 01/04/2024.
//

#ifndef VALIFLIX_STATICLIST_H
#define VALIFLIX_STATICLIST_H

#include <iostream>
#include <functional>

template<typename T, int Capacity>
class StaticList {
private:
    T array[Capacity];
    int size;

public:
    StaticList() : size(0) {}

    void insertAtBeginning(const T& data) {
        insertAtPosition(data, 0);
    }

    void insertAtPosition(const T& data, int position) {
        if (size < Capacity && position >= 0 && position <= size) {
            shiftRight(position);
            array[position] = data;
            ++size;
            return;
        }

        std::cerr << "Erro: Posição inválida ou lista cheia." << std::endl;
    }

    void insertAtEnd(const T& data) {
        if (size < Capacity) {
            array[size] = data;
            ++size;
            return;
        }

        std::cerr << "Erro: Lista cheia." << std::endl;
    }

    void removeFromBeginning() {
        removeFromPosition(0);
    }

    void removeFromPosition(int position) {
        if (position >= 0 && position < size) {
            shiftLeft(position);
            --size;
            return;
        }

        std::cerr << "Erro: Posição inválida." << std::endl;
    }

    void removeFromEnd() {
        if (size > 0) {
            --size;
            return;
        }

        std::cerr << "Erro: Lista vazia." << std::endl;
    }

    void shiftRight(int position) {
        for (int i = size; i > position; --i) {
            array[i] = array[i - 1];
        }
    }

    void shiftLeft(int position) {
        for (int i = position; i < (size - 1); ++i) {
            array[i] = array[i + 1];
        }
    }

    T get(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        }

        std::cerr << "Índice fora dos limites da lista." << std::endl;
        return T();
    }

    void forEach(std::function<void(const T&)> callBack) {
        for (int i = 0; i < size; ++i) {
            callBack(array[i]);
        }
    }

    StaticList<T, Capacity> filter(std::function<bool(const T&)> callBack) {
        StaticList<T, Capacity> result;

        for (int i = 0; i < size; ++i) {
            if (callBack(array[i])) {
                result.insertAtEnd(array[i]);
            }
        }

        return result;
    }

    int getSize() const {
        return size;
    }

    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << ", ";
        }
        std::cout << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const StaticList<T, Capacity>& list) {
        for (int i = 0; i < list.size; ++i) {
            os << list.array[i] << " ";
        }
        return os;
    }
};

#endif //VALIFLIX_STATICLIST_H
