//
// Created by cheetos on 3/10/18.
//

#include "Persona.h"
#include <iostream>

using namespace std;

void Persona::Correr()
{
    cout << "Soy " << this->nombre << " y tengo " << this->edad << " años. Y CORRO!" << endl;
}

void Persona::Correr(int km)
{
    cout << "He corrido: " << km << " kilometros." << endl;
}