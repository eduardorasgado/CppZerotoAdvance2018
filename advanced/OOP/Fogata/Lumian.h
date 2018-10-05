//
// Created by cheetos on 4/10/18.
//

#include "Heroe.h"
#include <iostream>

using namespace std;

// LUMIAN IS LIKE A MAGICIAN BUT WITH NATURE POWERS
class Lumian
{
    private:
        Hero stats;
        string name;

    public:
        Lumian(string name) : stats(100, true, 12, 10)
        {
            this->name = name;
        }

        ~Lumian(){
            // DESTRUCTOR
        }

        int attack();
        int naturalDefense();
        bool isAlive();
};
