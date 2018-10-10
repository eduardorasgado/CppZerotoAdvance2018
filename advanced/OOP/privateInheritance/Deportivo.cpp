//
// Created by cheetos on 10/10/18.
//

#include "Deportivo.h"
#include <iostream>

int Deportivo::getCilindrada()
{
    return this->cilindrada;
}

std::string Deportivo::getMarcaDeportivo()
{
    // heredado privado obtenido por metodo de la clase derivada
    // solo podemos hacer un getter pero no setters
    return getMarca();
}
