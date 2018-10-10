//
// Created by cheetos on 10/10/18.
//

#include "Turismo.h"

Turismo::Turismo(std::string marca, std::string color, std::string modelo, int numPuertas)
        : Vehiculo(marca, color, modelo)
{
    this->numPuertas = numPuertas;
}

int Turismo::getNumeroPuertas()
{
    return this->numPuertas;
}

std::string Turismo::retornarModelo()
{
    // retornando un elemento heredado de la clas base vehiculo
    return getModelo();
}