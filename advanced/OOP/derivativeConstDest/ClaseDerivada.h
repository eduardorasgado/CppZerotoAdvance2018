//
// Created by cheetos on 12/10/18.
//

#ifndef DERIVATIVECONSTDEST_CLASEDERIVADA_H
#define DERIVATIVECONSTDEST_CLASEDERIVADA_H

#include "ClaseBase.h"
#include <iostream>

class ClaseDerivada : public ClaseBase
{
    private:
        int numero2;

    public:
        ClaseDerivada(int numero, int numero2)
        : ClaseBase(numero)
        {
            this->numero2 = numero2;
            std::cout << "Constructor clase derivada" << std::endl;
        }

        ~ClaseDerivada()
        {
            std::cout << "Destuctor clase derivada" << std::endl;
        } // Destructor
};


#endif //DERIVATIVECONSTDEST_CLASEDERIVADA_H
