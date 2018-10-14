//
// Created by cheetos on 14/10/18.
//

#include "GatoDomestico.h"
#include <iostream>

namespace Animals
{
    // implementando la funcion virtual
    std::string GatoDomestico::imprimirDieta()
    {
        std::string dieta = "Curry";
        return dieta;
    }

    void GatoDomestico::setNombreOwner(std::string nombreOwner)
    {
        // nuevo owner para el gato
        this->nombreOwner = nombreOwner;
    }

    std::string GatoDomestico::getNombreOwner()
    {
        return this->nombreOwner;
    }
}