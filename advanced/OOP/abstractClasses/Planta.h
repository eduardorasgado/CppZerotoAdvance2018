//
// Created by cheetos on 12/10/18.
//

#ifndef ABSTRACTCLASSES_PLANTA_H
#define ABSTRACTCLASSES_PLANTA_H

#include "SerVivo.h"
#include <iostream>

class Planta : public SerVivo
{
    public:
        void alimentarse()
        {
            std::cout << "La planta se alimenta mediante fotosintesis" << std::endl;
        }

};

#endif //ABSTRACTCLASSES_PLANTA_H
