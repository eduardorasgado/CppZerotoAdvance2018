//
// Created by cheetos on 12/10/18.
//
#include <iostream>
#include "Hidroavion.h"

std::string Hidroavion::getCodigo()
{
    return this->codigo;
}

void Hidroavion::mostrarDatos()
{
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Modelo: " << getModelo() << std::endl;
    std::cout << "Codigo: " << this->codigo << std::endl;
}