//
// Created by cheetos on 10/10/18.
//

#include "Vehiculo.h"
#include <iostream>

std::string Vehiculo::getMarca()
{
    //
    return this->marca;
}

std::string Vehiculo::getColor()
{
    return this->color;
}

std::string Vehiculo::getModelo()
{
    return this->modelo;
}

void Vehiculo::setColor(std::string color)
{
    this->color = color;
}