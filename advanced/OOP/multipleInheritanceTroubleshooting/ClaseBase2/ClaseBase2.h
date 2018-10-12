//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE2_H
#define MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE2_H

class ClaseBase2
{
    protected:
        int x;

    public:
        ClaseBase2(int x) : x{x}{} // Constructor

        ~ClaseBase2(){}  // Destructor

        int getX();
};

#endif //MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE2_H
