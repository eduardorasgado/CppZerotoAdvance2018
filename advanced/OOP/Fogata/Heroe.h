#ifndef HEROE_H
#define HEROE_H

//
// Created by cheetos on 4/10/18.
//

class Heroe
{
    private:
        int lifePoints;
        bool isAlive;
        int normalAttack;
        int normalDefense;

    public:
        Heroe(int lifePoints, bool isAlive, int normalAttack, int normalDefense) // CONSTRUCTOR 1
        {
            this->lifePoints = lifePoints;
            this->isAlive = isAlive;
            this->normalAttack = normalAttack;
            this->normalDefense =  normalDefense;
        }

        ~Heroe() {
            // DESTRUCTOR
        }

        bool ifItIsAlive();
        int attack();
        int defense();
};

#endif