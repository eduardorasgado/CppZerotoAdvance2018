//
// Created by cheetos on 4/10/18.
//

#include "Heroe.h"
#include <iostream>


class Okasan
{
    private:
        Heroe stats;
        std::string name;

    public:
        Okasan(std::string name) : stats(100, true, 14, 8)
        {
            this->name = name;
        }

        ~Okasan(){
            // DESTRUCTOR
        }

        int attack();
        int naturalDefense();
        bool isAlive();
};
