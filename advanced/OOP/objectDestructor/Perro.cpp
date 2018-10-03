//
// Created by cheetos on 3/10/18.
//

#include <iostream>
#include "Perro.h"

using namespace std;

void Perro::showData()
{
    cout << "NOMBRE: " << this->nombre << endl;
    cout << "RAZA: " << this->raza << endl;
}

void Perro::play()
{
    cout << this->nombre << " está jugando!" << endl;
}
