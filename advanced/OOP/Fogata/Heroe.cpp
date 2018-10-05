//
// Created by cheetos on 4/10/18.
//

#include "Heroe.h"

bool Heroe::ifItIsAlive()
{
    return this->isAlive;
}

int Heroe::attack()
{
    return this->normalAttack;
}

int Heroe::defense()
{
    return this->normalDefense;
}