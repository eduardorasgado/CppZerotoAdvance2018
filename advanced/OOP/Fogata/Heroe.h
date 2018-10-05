//
// Created by cheetos on 4/10/18.
//

class Hero
{
    private:
        int lifePoints;
        bool isAlive;
        int normalAttack;
        int normalDefense;

    public:
        Hero(int lifePoints, bool isAlive, int normalAttack, int normalDefense) // CONSTRUCTOR 1
        {
            this->lifePoints = lifePoints;
            this->isAlive = isAlive;
            this->normalAttack = normalAttack;
            this->normalDefense =  normalDefense;
        }

        ~Hero() {
            // DESTRUCTOR
        }

        bool ifItIsAlive();
        int attack();
        int defense();
};