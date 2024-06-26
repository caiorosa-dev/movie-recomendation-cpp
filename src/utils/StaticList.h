//
// Created by Caio on 01/04/2024.
//

#ifndef VALIFLIX_STATICLIST_H
#define VALIFLIX_STATICLIST_H

#include <iostream>
#include <functional>

/*
 * Classe que representa uma lista estática.
 */
template<typename T, int Capacity>
class StaticList {
private:
    T array[Capacity];
    int size;

public:
    StaticList() : size(0) {}

    /*
     * Método para inserir um elemento no início da lista.
     */
    void insertAtBeginning(const T& data) {
        insertAtPosition(data, 0);
    }

    /*
     * Método para inserir um elemento na lista com base na posição.
     */
    void insertAtPosition(const T& data, int position) {
        if (size < Capacity && position >= 0 && position <= size) {
            shiftRight(position);
            array[position] = data;
            ++size;
            return;
        }

        std::cerr << "Erro: Posição inválida ou lista cheia." << std::endl;
    }

    /*
     * Método para inserir um elemento no final da lista.
     */
    void insertAtEnd(const T& data) {
        if (size < Capacity) {
            array[size] = data;
            ++size;
            return;
        }

        std::cerr << "Erro: Lista cheia." << std::endl;
    }

    /*
     * Método para remover o primeiro elemento da lista.
     */
    void removeFromBeginning() {
        removeFromPosition(0);
    }

    /*
     * Método para remover um elemento da lista com base na posição.
     */
    void removeFromPosition(int position) {
        if (position >= 0 && position < size) {
            shiftLeft(position);
            --size;
            return;
        }

        std::cerr << "Erro: Posição inválida." << std::endl;
    }

    /*
     * Método para remover o último elemento da lista.
     */
    void removeFromEnd() {
        if (size > 0) {
            --size;
            return;
        }

        std::cerr << "Erro: Lista vazia." << std::endl;
    }

    /*
     * Método para mover os elementos da lista para a direita.
     */
    void shiftRight(int position) {
        for (int i = size; i > position; --i) {
            array[i] = array[i - 1];
        }
    }

    /*
     * Método para mover os elementos da lista para a esquerda.
     */
    void shiftLeft(int position) {
        for (int i = position; i < (size - 1); ++i) {
            array[i] = array[i + 1];
        }
    }

    /*
     * Método para obter um elemento da lista.
     */
    T get(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        }

        std::cerr << "Índice fora dos limites da lista." << std::endl;
        return T();
    }

    void sort(std::function<bool(const T&, const T&)> compare) {
        quickSort(0, size - 1, compare);
    }

    void quickSort(int low, int high, std::function<bool(const T&, const T&)> compare) {
        if (low < high) {
            int partitionIndex = partition(low, high, compare);

            quickSort(low, partitionIndex - 1, compare);
            quickSort(partitionIndex + 1, high, compare);
        }
    }

    int partition(int low, int high, std::function<bool(const T&, const T&)> compare) {
        T pivot = array[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; ++j) {
            if (compare(array[j], pivot)) {
                ++i;
                swap(i, j);
            }
        }
        swap(i + 1, high);
        return (i + 1);
    }

    void swap(int i, int j) {
        if (i >= 0 && i < size && j >= 0 && j < size) {
            T temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        } else {
            std::cerr << "Erro: Índices inválidos." << std::endl;
        }
    }

    /*
     * Método para obter o index de um elemento da lista.
     */
    int getIndex(T value) {
        for (int i = 0; i < size; ++i) {
            if (array[i] == value) {
                return i;
            }
        }

        return -1;
    }

    /*
     * Método para verificar se a lista contém um elemento.
     */
    bool contains(T value) {
        for (int i = 0; i < size; ++i) {
            if (array[i] == value) {
                return true;
            }
        }

        return false;
    }

    /*
     * Método para percorrer a lista e chamar um callback.
     */
    void forEach(std::function<void(const T&, int index)> callBack) {
        for (int i = 0; i < size; ++i) {
            callBack(array[i], i);
        }
    }

    /*
     * Método para filtrar a lista com base em um callback.
     */
    StaticList<T, Capacity> filter(std::function<bool(const T&)> callBack) {
        StaticList<T, Capacity> result;

        for (int i = 0; i < size; ++i) {
            if (callBack(array[i])) {
                result.insertAtEnd(array[i]);
            }
        }

        return result;
    }

    /*
     * Método para retornar um elemento aleatório da lista.
     */
    T getRandom() {
        return array[rand() % size];
    }

    /*
     * Método para retornar o tamanho da lista.
     */
    int getSize() const {
        return size;
    }

    /*
     * Método para imprimir a lista.
     */
    void print() const {
        for (int i = 0; i < size; ++i) {
            bool isEnd = i == size - 1;

            std::cout << i << ". " << array[i] << std::endl;
        }
        std::cout << std::endl;
    }

    /*
     * Sobrecarga do operador de saída para facilitar a impressão da lista.
     */
    friend std::ostream& operator<<(std::ostream& os, const StaticList<T, Capacity>& list) {
        for (int i = 0; i < list.size; ++i) {
            os << list.array[i] << " ";
        }
        return os;
    }

    void paginate(int pageSize, int page) {
         int startIndex = (page - 1) * pageSize;
         int endIndex = startIndex + pageSize;

        if (startIndex < 0 ) startIndex = 0;
        if (endIndex <= 0 ) endIndex = pageSize;

         if (startIndex >= size) {
             std::cout << "Página não encontrada." << std::endl;
             return;
         }

         std::cout << std::endl << "Pagina " << page << ":" << std::endl;
         for (int i = startIndex; i < endIndex; ++i) {
             std::cout << "\t " << i + startIndex + 1 << ". " << array[i] << std::endl;
         }
     }
};

#endif //VALIFLIX_STATICLIST_H
