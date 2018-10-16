//
// Created by cheetos on 14/10/18.
//

#include "Persona.h"
#include <iostream>

namespace Soccer
{
    void Persona::viajar()
    {
        std::cout << "Esoty viajando viajando" << std::endl;
    }

    std::string Persona::getNombre()
    {
        return this->nombre;
    }

    std::string Persona::getApellido()
    {
        return this->apellido;
    }
}