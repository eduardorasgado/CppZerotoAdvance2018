//
// Created by cheetos on 1/11/18.
//

#ifndef MEMORYALLOCATION_CAT_H
#define MEMORYALLOCATION_CAT_H

#include <iostream>

class Cat
{
    private:
        //
        std::string name;
        int age;
    public:
        Cat(std::string, int);
        ~Cat(); // Destructor

        void speak();
};

#endif //MEMORYALLOCATION_CAT_H
