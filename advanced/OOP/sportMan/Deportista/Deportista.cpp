//
// Created by cheetos on 14/10/18.
//

#include "Deportista.h"
#include <iostream>

namespace People
{
    void Deportista::setNombreEntrenador(std::string nombreEntrenador)
    {
        this->nombreEntrenador = nombreEntrenador;
    }

    std::string Deportista::getNombreEntrenador()
    {
        return this->nombreEntrenador;
    }

    void Deportista::mostrarDatos()
    {
        std::cout << "El nombre del entrenador es:";
        std::cout << this->nombreEntrenador;
        std::cout << std::endl;
    }
}