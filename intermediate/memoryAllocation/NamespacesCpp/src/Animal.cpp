#include <iostream>
#include "Animal.h"

namespace OtherAnimals
{
    Cat::Cat(std::string specie, char division)
            : specie{specie}, division{division}{}

    Cat::~Cat()
    {
        // Destructor
        std::cout << "Animal in namespace OtherAnimals destructed" << std::endl;
    }
    void Cat::speakTwice()
    {
        std::cout << "Meow meowwww!" << std::endl;
    }
}