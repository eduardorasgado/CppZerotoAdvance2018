//
// Created by cheetos on 3/10/18.
//
#include "Estudiante.h"
#include <iostream>

using namespace std;

void Estudiante::showData()
{
    cout << "Matricula: " << this->matricula << endl;
    cout << "Promedio: " << this->promedio << endl;
    cout << "NUmero de expediente: " << this->exp.getNumExpediente() << endl;
    cout << "Direccion de alumno: " << this->dir.getDireccion() << endl;
}