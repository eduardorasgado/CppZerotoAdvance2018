//
// Created by cheetos on 4/10/18.
//

#include "Okasan.h"

int Okasan::attack()
{
    return this->stats.attack();
}

int Okasan::naturalDefense()
{
    return this->stats.defense();
}

bool Okasan::isAlive()
{
    return this->stats.ifItIsAlive();
}