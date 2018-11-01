/*
 * NAMESPACES IN C++
 */
#include <iostream>
#include "src/Cat.h"
#include "src/Animal.h"

int main()
{
    // cat in Cat.h
    Cat c1("Bototes", 2);
    c1.speak();

    // Cat with namespace, in Animal.h
    OtherAnimals::Cat c2("Hidari", 'A');
    c2.speakTwice();
    return 0;
}