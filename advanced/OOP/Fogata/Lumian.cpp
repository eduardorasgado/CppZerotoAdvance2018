//
// Created by cheetos on 4/10/18.
//

#include "Lumian.h"
#include <iostream>

using namespace std;

int Lumian::attack()
{
    return this->stats.attack();
}

int Lumian::naturalDefense()
{
    return this->stats.defense();
}

bool Lumian::isAlive()
{
    return this->stats.ifItIsAlive();
}