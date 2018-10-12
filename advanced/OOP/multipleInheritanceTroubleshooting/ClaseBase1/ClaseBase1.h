//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE1_H
#define MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE1_H

class ClaseBase1
{
    protected:
        int x;

    public:
        ClaseBase1(int x) : x{x}{} // Constructor

        ~ClaseBase1(){} // Destructor

        int getX();
};

#endif //MULTIPLEINHERITANCETROUBLESHOOTING_CLASEBASE1_H
