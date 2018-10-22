#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // para poder usar los sets y multisets
#include <ctime>
#include "SetOperations.h"

// Declaraciones
template <typename T>
void addRandomValues(std::set<T>*);

template <typename T>
void showTheSet(std::set<T>*);

template <typename T>
void searchInSet(std::set<T>*);

template <typename T>
void poppingFromSeT(std::set<T>*);

// Definiciones
template <typename T>
void addRandomValues(std::set<T>* values)
{
    int N, num;
    std::cout << "Longitud pretendida: ", std::cin >> N;

    std::cout << "Creando valores al azar para el set: " << std::endl;
    for (int i = 0; i < N; ++i)
    {
        num = rand() % N;
        std::cout << num << " ";
        values->insert(num);
    }
    std::cout << std::endl;
}

template <typename T>
void showTheSet(std::set<T>* values)
{
    std::cout << "Mostrando el set: " << std::endl;
    //usamos copy de algorithms
    // creamos el iterador de impresion
    std::ostream_iterator<T> salida(std::cout, " ");
    // usamos el iterador, copiando los elementos a la salida
    std::copy(values->begin(), values->end(), salida);

    std::cout << std::endl;
}

template <typename T>
void searchInSet(std::set<T>* values)
{
    // se le pide al usuario el elemento que se va a busca
    T N;
    std::cout << "Buscar el elemento: ", std::cin >> N;

    std::set<int>::iterator i;
    // buscando l elemento y guardandolo dentro de un iterador
    i = values->find(N);

    // imprimiendo el resultado
    if(i != values->end()) std::cout << "El elemento " << *i << " fue encontrado." << std::endl;
    else std::cout << "No se encontró el elemento." << std::endl;
}

template <typename T>
void poppingFromSeT(std::set<T>* values)
{
    std::cout << "Eliminando elementos del set" << std::endl;
    showTheSet(values);
    T N;

    for(;;)
    {
        std::cout << "Número a eliminar: ", std::cin >> N;
        // buscando el elemento agreagado para poder eliminarlo
        std::set<int>::iterator i = values->find(N);
        if (i != values->end()) break;
        else std::cout << "El elemento " << N << " no esxiste en el set." << std::endl;
    }

    std::cout << "Eliminando elemento..." << std::endl;
    // eliminando un elemento dentro del set, previamente comprobado su existencia(del elemento)
    values->erase(N);
    std::cout << std::endl;
}