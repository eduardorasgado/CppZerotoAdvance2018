#pragma once

#include "../Mamifero/Mamifero.h"
#include <iostream>

namespace Animals
{
    class Felino : public Mamifero
    {
        private:
            std::string nombreCirco;

        public:
            Felino(int birthYear, std::string birthPlace,
                    std::string raza, std::string nombreCirco)
                    : Mamifero(birthYear, birthPlace, raza)
            {
                this->nombreCirco = nombreCirco;
            } // Constructor 1

            Felino(int birthYear, std::string birthPlace,
                   std::string raza)
                   : Mamifero(birthYear, birthPlace, raza)
            { } // constructor 2: para poder crear un gato domestico

            ~Felino(){} // Destructor

            // implementando la funcion virtual de Manmifero
            std::string imprimirDieta();

            // Setters y getters para el circo
            void setNombreCirco(std::string);
            std::string getNombreCirco();

    };
}