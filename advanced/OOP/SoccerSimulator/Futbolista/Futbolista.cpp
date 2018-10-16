//
// Created by cheetos on 14/10/18.
//

#include "Futbolista.h"
#include <iostream>

namespace Soccer
{
    void Futbolista::entrevista()
    {
        std::cout << "Teniendo una entrevista..." << std::endl;
    }

    void Futbolista::partido()
    {
        std::cout << "Están jugando un partidazo..." << std::endl;
    }

    void Futbolista::entrenamiento()
    {
        std::cout << "Los jugadores estan teniendo un entrenamiento pesado" << std::endl;
    }
}