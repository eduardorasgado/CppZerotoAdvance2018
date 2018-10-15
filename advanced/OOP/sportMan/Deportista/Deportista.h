#pragma once

#include <iostream>

namespace People
{
    class Deportista
    {
        private:
            std::string nombreEntrenador;
            std::string nombre;

        public:
            Deportista(std::string nombreEntrenador,
                       std::string nombre)
            : nombreEntrenador{nombreEntrenador},
            nombre{nombre}{}

            ~Deportista(){ } // Destuctor

            //setters y getters
            void setNombreEntrenador(std::string);
            std::string getNombreEntrenador();
            std::string getNombre();

            void mostrarDatos();
    };
}