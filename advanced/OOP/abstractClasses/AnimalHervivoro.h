//
// Created by cheetos on 12/10/18.
//

#ifndef ABSTRACTCLASSES_ANIMALHERVIVORO_H
#define ABSTRACTCLASSES_ANIMALHERVIVORO_H

#include "Animal.h"
#include <iostream>

class AnimalHervivoro : public Animal
{
    public:
        void alimentarse()
        {
            std::cout << "Este animal se alimenta de plantas." << std::endl;
        }
};

#endif //ABSTRACTCLASSES_ANIMALHERVIVORO_H
