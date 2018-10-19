/*
 * Deque: double-ended queue
 *
 * deque (usually pronounced like "deck") is an irregular acronym of double-ended queue.
 * Double-ended queues are sequence containers with dynamic sizes that can be expanded or
 * contracted on both ends (either its front or its back).
 *
 * http://www.cplusplus.com/reference/deque/deque/
 * */
#include <iostream>
#include <deque>

template <typename T>
void showingDeque(std::deque<T>*);

template <typename T>
void poppingDeque(std::deque<T>*);

int main() {
    // Creando un objeto deque dinamico
    std::deque<char> *letters = new std::deque<char>;

    //Insertando elementos frontalmente
    letters->push_front('C');
    letters->push_front('B');
    letters->push_front('A');

    // Insertandolo elementos al final del deque
    letters->push_back('D');
    letters->push_back('E');
    letters->push_back('F');

    showingDeque(letters);

    poppingDeque(letters);

    showingDeque(letters);
    return 0;
}

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