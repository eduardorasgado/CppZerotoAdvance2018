//
// Created by cheetos on 14/10/18.
//

#include "BecadoDeporte.h"

#include <iostream>

namespace People
{
    float BecadoDeporte::getMontoBeca()
    {
        return this->montoBeca;
    }

    void BecadoDeporte::setMontoBeca(float per)
    {
        float montoBeca = this->montoBeca + ((this->montoBeca * per)/100);
        this->montoBeca = montoBeca;
    }

    void BecadoDeporte::mostrarDatos()
    {
        std::cout << "Datos del becado " << std::endl;
        std::cout << "Nombre del becado: " << getNombre() << std::endl;
        //Alumno::mostrarDatos();
        //Deportista::mostrarDatos();
        std::cout << "Monto de la beca: ";
        std::cout << this->montoBeca << std::endl;
    }
}