/*
 * NAMESPACES IN C++
 */
#include <iostream>
#include "src/Cat.h"
#include "src/Animal.h"

// using explicitly namespace
// to directly use of Cat
using namespace marsCat;

int main()
{
    // cat in Cat.h
    marsCat::Cat c1("Bototes", 2);
    c1.speak();

    // Cat in Animal.h
    OtherAnimals::Cat c2("Hidari", 'A');
    c2.speakTwice();

    // constants in namespaces
    std::cout << "Martian cats are from: ";
    std::cout << marsCat::CATWORLD << std::endl;

    std::cout << "Other worlds cats are from: ";
    std::cout << OtherAnimals::CATWORLD << std::endl;

    std::cout << "using namespace specified: ";
    std::cout << CATWORLD << std::endl;

    return 0;
}