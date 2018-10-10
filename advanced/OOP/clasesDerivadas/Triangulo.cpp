//
// Created by cheetos on 10/10/18.
//

#include "Triangulo.h"
#include <cmath>
float Triangulo::areaTriangulo()
{
    // formula de heron para el area de cuaquier triangulo en base a sus lados
    float a{this->lado1};
    float b{this->lado2};
    float c{this->lado3};

    float s = (a + b + c) / 2;

    float area = sqrt(s*(s - a)*(s - b)*(s - c));
    return area;
}