//
// Created by cheetos on 7/10/18.
//

#include "Vehicle.h"
#include <iostream>

int Vehicle::indiceBarato(Vehicle *coches, int n)
{
    int indice = 0;
    double precio;
    precio = coches[0].getPrecio();
    for (int i = 0; i < n; ++i)
    {
        if(coches[i].getPrecio() < precio)
        {
            precio = coches[i].getPrecio();
            indice = i;
        }

    }
    return indice;
}

std::string Vehicle::getMarca()
{
    return this->marca;
}

std::string Vehicle::getModelo()
{
    return this->modelo;
}

double Vehicle::getPrecio()
{
    return this->precio;
}

void Vehicle::mostrarDatos()
{
    std::cout << "Marca: " << this->marca << std::endl;
    std::cout << "Modelo: " << this->modelo << std::endl;
    std::cout << "Precio: " << this->precio << std::endl;
}