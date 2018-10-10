//
// Created by cheetos on 10/10/18.
//

#include "Furgoneta.h"

// constructor
Furgoneta::Furgoneta(std::string marca, std::string color,
        std::string modelo, int carga)
        : Vehiculo(marca, color, modelo)
{
    this->carga = carga;
}

int Furgoneta::getCarga()
{
    return this->carga;
}

std::string Furgoneta::getBaseColor()
{
    // llamando el metodo protected heredado de vehiculo
    return getColor();
}