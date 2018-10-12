//
// Created by cheetos on 12/10/18.
//

#include "Avion.h"
#include <iostream>

void Avion::indicarAvion()
{
    std::cout << "Desplazamiento por aire" << std::endl;
}

std::string Avion::getModelo()
{
    return this->modelo;
}