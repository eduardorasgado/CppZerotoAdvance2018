//
// Created by cheetos on 12/10/18.
//

#ifndef ABSTRACTCLASSES_ANIMALCARNIVORO_H
#define ABSTRACTCLASSES_ANIMALCARNIVORO_H

#include "Animal.h"
#include <iostream>

class AnimalCarnivoro : public Animal
{
    public:
        void alimentarse()
        {
            std::cout << "Este animal se alimenta de carne" << std::endl;
        }
};

#endif //ABSTRACTCLASSES_ANIMALCARNIVORO_H
