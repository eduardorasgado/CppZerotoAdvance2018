//
// Created by cheetos on 10/10/18.
//

#ifndef PUBLICINHERITANCE_TURISMO_H
#define PUBLICINHERITANCE_TURISMO_H

#include "Vehiculo.h"

class Turismo : public Vehiculo
{
    private:
        int numPuertas;

    public:
        Turismo(std::string marca, std::string color, std::string modelo, int numPuertas);

        ~Turismo() {} // Destructor

        int getNumeroPuertas();
        std::string retornarModelo();
};

#endif //PUBLICINHERITANCE_TURISMO_H
