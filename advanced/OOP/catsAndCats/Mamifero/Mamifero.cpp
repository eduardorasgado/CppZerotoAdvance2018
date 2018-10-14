//
// Created by cheetos on 14/10/18.
//

#include "Mamifero.h"
#include <iostream>

namespace Animals
{
    int Mamifero::getBirthYear()
    {
        return this->birthYear;
    }

    std::string Mamifero::getBirthPlace()
    {
        return this->birthPlace;
    }

    std::string Mamifero::getRaza()
    {
        return this->raza;
    }
}