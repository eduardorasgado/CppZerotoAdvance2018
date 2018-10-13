//
// Created by cheetos on 12/10/18.
//
#include "Rectangulo.h"

namespace Figure
{
    float Rectangulo::perimetro()
    {
        float per = 2 * this->base + (2 * this->altura);
        return per;
    }

    float Rectangulo::area()
    {
        float area = this->base * this->altura;
        return area;
    }
}