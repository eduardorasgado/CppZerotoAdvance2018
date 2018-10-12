//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCE_AVION_H
#define MULTIPLEINHERITANCE_AVION_H

#include <iostream>
#include "../Barco/Barco.h"

class Avion
{
    private:
        std::string modelo;

    public:
        Avion(std::string modelo) : modelo{modelo}{}

        ~Avion(){}  // Destructor

        void indicarAvion();

};

#endif //MULTIPLEINHERITANCE_AVION_H
