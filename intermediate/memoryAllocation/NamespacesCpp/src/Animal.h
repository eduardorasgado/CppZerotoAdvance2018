//
// Created by cheetos on 1/11/18.
//

#ifndef MEMORYALLOCATION_ANIMAL_H
#define MEMORYALLOCATION_ANIMAL_H

#include <iostream>

namespace OtherAnimals
{
    class Cat
    {
        private:
            std::string specie;
            char division;
        public:
            Cat(std::string, char);
            ~Cat();
            void speakTwice();
    };
}

#endif //MEMORYALLOCATION_ANIMAL_H
