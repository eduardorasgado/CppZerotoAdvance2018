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

    void GatoDomestico::setNombreOwner(std::string name)
    {
        this->nombreOwner = name;
    }

    std::string GatoDomestico::getNombreOwner()
    {
        return this->nombreOwner;
    }
}