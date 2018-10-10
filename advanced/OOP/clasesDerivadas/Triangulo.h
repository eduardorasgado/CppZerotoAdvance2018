//
// Created by cheetos on 10/10/18.
//

#ifndef CLASESDERIVADAS_TRIANGULO_H
#define CLASESDERIVADAS_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura
{
    private:
        float lado1, lado2, lado3;

    public:
        Triangulo(int nLados, float lado1, float lado2, float lado3)
            : Figura(nLados)
        {
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }

        float areaTriangulo();
};

#endif //CLASESDERIVADAS_TRIANGULO_H
