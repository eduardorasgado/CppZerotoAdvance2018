//
// Created by cheetos on 14/10/18.
//

#include "Persona.h"
#include <iostream>

namespace Soccer
{
    void Persona::viajar()
    {
        std::string country;
        std::cout << "Viajar, a qué país?" << std::endl;
        std::cin  >> country;
        std::cout << "Todos estamos viajando a " << country << std::endl;
    }
}