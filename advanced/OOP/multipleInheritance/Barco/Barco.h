//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCE_BARCO_H
#define MULTIPLEINHERITANCE_BARCO_H

#include <iostream>

class Barco
{
    private:
        std::string nombre;

    public:
        Barco(std::string nombre) : nombre{nombre}{}

        ~Barco(){}  // Destructor

        void indicarBarco();
};

#endif //MULTIPLEINHERITANCE_BARCO_H
