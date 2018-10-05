//
// Created by cheetos on 4/10/18.
//

#include "Heroe.h"

bool Hero::ifItIsAlive()
{
    return this->isAlive;
}

int Hero::attack()
{
    return this->normalAttack;
}

int Hero::defense()
{
    return this->normalDefense;
}