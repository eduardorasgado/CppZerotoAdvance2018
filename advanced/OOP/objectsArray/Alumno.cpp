//
// Created by cheetos on 3/10/18.
//

#include "Alumno.h"
#include <iostream>

using namespace std;


void Alumno::requestData()
{
    cout << "Digite la calificacion de matematicas:";
    cin >> this->calMate;

    cout << "Digite la calificacion de programacion: ";
    cin >> this->calProg;
}

void Alumno::showNotes()
{
    cout << "Matematicas: " << this->calMate  << endl;
    cout << "Programacion: " << this->calProg << endl;
    cout << "Promedio: " << (this->calMate+this->calProg)/2 << endl;
}
