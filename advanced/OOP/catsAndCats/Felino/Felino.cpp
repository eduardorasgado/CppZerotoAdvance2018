//
// Created by cheetos on 14/10/18.
//

#include "Felino.h"
#include <iostream>

namespace Animals
{
    //implementando la funcion virtual
    std::string Felino::imprimirDieta()
    {
        std::string dieta = "Queso";
        return dieta;
    }

    void Felino::setNombreCirco(std::string nombre)
    {
        this->nombreCirco = nombre;
    }

    std::string Felino::getNombreCirco()
    {
        return this->nombreCirco;
    }
}