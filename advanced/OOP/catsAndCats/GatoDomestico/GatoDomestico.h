#pragma once

#include "../Felino/Felino.h"
#include <iostream>

namespace Animals
{
    class GatoDomestico : public Felino
    {
        private:
            std::string nombreOwner;

        public:
            GatoDomestico(int birthYear, std::string birthPlace,
                          std::string raza, std::string nombreOwner)
            : Felino(birthYear, birthPlace, raza)
            {
                this->nombreOwner = nombreOwner;
            }

            ~GatoDomestico(){ } // Destructor

            // Desarrollando la funcion virtual de mamifero
            // heredada de Mamifero
            std::string imprimirDieta();

            void setNombreOwner(std::string);
            std::string getNombreOwner();

    };
}