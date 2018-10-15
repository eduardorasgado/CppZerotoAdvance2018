#pragma once

#include <iostream>

namespace People
{
    class Alumno {
        private:
            std::string nombreCarrera;

        public:
            Alumno(std::string nombreCarrera)
                    : nombreCarrera{nombreCarrera} {}

            ~Alumno() {} // Destructor

            //setters y getters
            std::string getNombreCarrera();
            void setNombreCarrera(std::string);
            void mostrarDatos();
    };
}