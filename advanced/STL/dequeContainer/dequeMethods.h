#pragma once

#include <iostream>
#include <deque>

// Declaraciones

template <typename T>
void showingDeque(std::deque<T>*);

template <typename T>
void poppingDeque(std::deque<T>*);

// Definiciones

template <typename T>
void showingDeque(std::deque<T>* deq1)
{
    // Mostrar los elementos del deque
    for (int i = 0; i < deq1->size(); ++i)
    {
        std::cout << deq1->at(i) << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void poppingDeque(std::deque<T>* deq1)
{
    std::cout << "Eliminando un elemento del frente del deque." << std::endl;
    deq1->pop_front();

    std::cout << "Eliminando un elemento del final del deque." << std::endl;
    deq1->pop_back();
}