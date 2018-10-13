//
// Created by cheetos on 12/10/18.
//

#include "Triangulo.h"
#include <cmath>

namespace Figure
{
    float Triangulo::perimetro()
    {
        float per = this->lado1 + this->lado2 + this->lado3;
        return per;
    }

    float Triangulo::area()
    {
        // Al solo tener tres lados del triangulo
        // vamos a tener que usar la formuula de heron
        float l1 = this->lado1;
        float l2 = this->lado2;
        float l3 = this->lado3;
        float s = (l1 + l2 + l3) / 2;
        float area = sqrt(s*(s-l1) * (s - l2) * (s - l3));
        return area;
    }
}