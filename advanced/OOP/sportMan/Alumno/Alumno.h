#pragma once

#include <iostream>

namespace People
{
    class Alumno {
        private:
            std::string nombreCarrera;
            std::string nombre;

        public:
            Alumno(std::string nombreCarrera, std::string nombre)
                    : nombreCarrera{nombreCarrera},
                    nombre{nombre}{}

            ~Alumno() {} // Destructor

            //setters y getters
            std::string getNombreCarrera();
            void setNombreCarrera(std::string);
            std::string getNombre();

            void mostrarDatos();
    };
}