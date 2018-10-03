//
// Created by cheetos on 3/10/18.
//
#include <iostream>

using namespace std;

class Direccion
{
    private:
        string direccion;

    public:
        Direccion(string direccion) // Constructor 1
        {
            this->direccion = direccion;
        }

        Direccion()
        {
            // Constructor por default
        }

        ~Direccion()
        {
            // Destructor
        }

        string getDireccion();
};