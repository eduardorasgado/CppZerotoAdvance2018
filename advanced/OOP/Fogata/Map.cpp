//
// Created by cheetos on 4/10/18.
//

#include <iostream>
#include "Map.h"
#include <cmath>

void Map::create()
{
    int size;
    // seed
    srand(time(0));
    // para crear el mapa de matriz
    size = ( rand() % 50)+30;
    // matriz dinamica
    this->map = new char*[size];

    for (int i = 0; i < size; i++) {
        this->map[i] = new char[size];
    }

    // Llenando el mapa
    for (int i = 0; i < size;i++) {
        for (int j = 0; j < size; j++) {
            *(*(this->map+i)+j) = ' ';
        }
    }

}