//
// Created by cheetos on 4/10/18.
//

#include "Heroe.h"
#include <iostream>

using namespace std;

class Okasan
{
    private:
        Hero stats;
        string name;

    public:
        Okasan(string name) : stats(100, true, 14, 8)
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
