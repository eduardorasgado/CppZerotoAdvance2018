//
// Created by cheetos on 10/10/18.
//

#ifndef DERIVATIVECONSTDEST_CLASEBASE_H
#define DERIVATIVECONSTDEST_CLASEBASE_H

#include <iostream>

class ClaseBase
{
    private:
        int numero;

    public:
        ClaseBase(int numero)
        {
            this->numero = numero;
            std::cout << "Constructor de la clase base"
        }
};

#endif //DERIVATIVECONSTDEST_CLASEBASE_H
