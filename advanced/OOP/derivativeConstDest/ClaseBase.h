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
        ClaseBase(int numero) : numero{numero}
        {
            std::cout << "Constructor de la clase base" << std::endl;
        }
        ~ClaseBase()
        {
            std::cout << "Destuctor clase base" << std::endl;
        }  // Destructor
};

#endif //DERIVATIVECONSTDEST_CLASEBASE_H
