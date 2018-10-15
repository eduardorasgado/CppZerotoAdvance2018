//
// Created by cheetos on 14/10/18.
//

#include "Alumno.h"
#include <iostream>

namespace People
{
    std::string Alumno::getNombreCarrera()
    {
        return this->nombreCarrera;
    }

    void Alumno::setNombreCarrera(std::string nombreCarrera)
    {
        this->nombreCarrera = nombreCarrera;
    }

    void Alumno::mostrarDatos()
    {
        std::cout << "Carrera del alumno: ";
        std::cout << this->nombreCarrera;
        std::cout << std::endl;
    }
}