//
// Created by cheetos on 9/10/18.
//

#include "Athlete.h"
#include <iostream>

float Athlete::getTiempoCarrera()
{
    //
    return this->tiempoCarrera;
}

void Athlete::mostrarDatosGanador()
{
    //
    std::cout << "Numero: " << this->numeroAtleta << std::endl;
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Tiempo: " << this->tiempoCarrera << std::endl;
}

int Athlete::indexWinner(Athlete *atletas, int N)
{
    float tiempoCarrera;
    int index = 0;

    tiempoCarrera = atletas[0].getTiempoCarrera();
    for (int i = 0; i < N; ++i)
    {
        //
        if(atletas[i].getTiempoCarrera() < tiempoCarrera)
        {
            tiempoCarrera = atletas[i].getTiempoCarrera();
            index = i;
        }
    }
    return index;
}