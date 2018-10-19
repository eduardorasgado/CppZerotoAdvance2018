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
#include "dequeMethods.h"

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
