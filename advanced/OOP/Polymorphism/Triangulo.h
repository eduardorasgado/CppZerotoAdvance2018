#pragma once

#include "Poligono.h"

namespace Figure
{
    class Triangulo : public Poligono
    {
        private:
            float lado1, lado2, lado3;

        public:
            Triangulo(float lado1, float lado2, float lado3)
            : lado1{lado1}, lado2{lado2}, lado3{lado3}{}

            ~Triangulo(){}  // Destructor

            float perimetro();
            float area();
    };
}