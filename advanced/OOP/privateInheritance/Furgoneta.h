//
// Created by cheetos on 10/10/18.
//

#ifndef PRIVATEINHERITANCE_FURGONETA_H
#define PRIVATEINHERITANCE_FURGONETA_H

#include "Vehiculo.h"
#include <iostream>

class Furgoneta : protected Vehiculo
{
    private:
        int carga;

    public:
        Furgoneta(std::string marca, std::string color,
                std::string modelo, int carga);

        ~Furgoneta(){} // Destructor

        int getCarga();
        std::string getBaseColor();
};
#endif //PRIVATEINHERITANCE_FURGONETA_H
