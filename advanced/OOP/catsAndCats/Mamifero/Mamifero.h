#pragma once

#include <iostream>

namespace Animals
{
    class Mamifero
    {
        private:
            int birthYear;
            std::string birthPlace;
            std::string raza;

        public:
            Mamifero(int birthYear, std::string birthPlace, std::string raza)
            : birthYear{birthYear}, birthPlace{birthPlace}, raza{raza}{}

            ~Mamifero(){} //Destructor

            virtual std::string imprimirDieta( ) = 0;

            int getBirthYear();
            std::string getBirthPlace();
            std::string getRaza();
    };
}