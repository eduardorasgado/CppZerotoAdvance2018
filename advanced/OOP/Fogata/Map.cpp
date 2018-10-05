//
// Created by cheetos on 4/10/18.
//

#include <iostream>
#include "Map.h"
// #include <cmath>
#include <cstdlib> // new delete y rand

void Map::create()
{
    // seed
    srand(time(0));
    // para crear el mapa de matriz
    this->size = ( rand() % 30)+10;
    // matriz dinamica
    this->map = new char*[this->size];

    for (int i = 0; i < this->size; i++)
        this->map[i] = new char[this->size];

    // Llenando el mapa
    for (int i = 0; i < this->size;i++)
        for (int j = 0; j < this->size; j++)
                        *(*(this->map+i)+j) = ' ';

    // Poniendo las rocas
    for (int i = 0; i < this->size;i++)
        for (int j = 0; j < this->size; j++)
                       if((rand() % 2 + 1) == 1)
                            *(*(this->map+i)+j) = '*';
}

void Map::destroy()
{
    // destruir el mapa
    for (int i = 0; i < this->size;i++) delete[] this->map[i];
    delete[] map;
}

void Map::showMap()
{
    for(int i = 0; i < this->size;i++)
        for (int j = 0; j < this->size; j++)
            std::cout << *(*(this->map+i)+j),
                (j==(this->size -1)) ? std::cout << "\n" :
                                    std::cout << " ";
}