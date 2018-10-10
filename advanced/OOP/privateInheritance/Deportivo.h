//
// Created by cheetos on 10/10/18.
//

#ifndef PRIVATEINHERITANCE_DEPORTIVO_H
#define PRIVATEINHERITANCE_DEPORTIVO_H

#include <iostream>
#include "Vehiculo.h"

class Deportivo : private Vehiculo
{
    private:
        int cilindrada;

    public:
        Deportivo(std::string marca, std::string color, std::string modelo, int cilindrada)
        : Vehiculo(marca, color, modelo)
        {
            this->cilindrada = cilindrada;
        }

        ~Deportivo() {}  // Destructor1

        int getCilindrada();
        std::string getMarcaDeportivo();
};

#endif //PRIVATEINHERITANCE_DEPORTIVO_H
