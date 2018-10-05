//
// Created by cheetos on 4/10/18.
//

#include <iostream>
#include "Map.h"
#include <cmath>
#include <cstdlib>

void Map::create()
{
    // seed
    srand(time(0));
    // para crear el mapa de matriz
    this->size = ( rand() % 50)+30;
    // matriz dinamica
    this->map = new char*[this->size];

    for (int i = 0; i < this->size; i++)
        this->map[i] = new char[this->size];

    // Llenando el mapa
    for (int i = 0; i < this->size;i++)
        for (int j = 0; j < this->size; j++)
                        *(*(this->map+i)+j) = ' ';
}

void Map::destroy()
{
    // destruir el mapa
    for (int i = 0; i < this->size;i++) delete[] this->map[i];
    delete[] map;
}