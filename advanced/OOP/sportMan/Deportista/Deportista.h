#pragma once

#include <iostream>

namespace People
{
    class Deportista
    {
        private:
            std::string nombreEntrenador;

        public:
            Deportista(std::string nombreEntrenador)
            : nombreEntrenador{nombreEntrenador}{}

            ~Deportista(){ } // Destuctor

            //setters y getters
            void setNombreEntrenador(std::string);
            std::string getNombreEntrenador();

            void mostrarDatos();
    };
}