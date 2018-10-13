#pragma once

#include "Poligono.h"
#include <iostream>

namespace Figure
{
    class Rectangulo : public Poligono
    {
        private:
            float base, altura;

        public:
            //
            Rectangulo(float base, float altura)
            : base{base}, altura{altura}{}

            ~Rectangulo(){}  // Destructor

            float perimetro();
            float area();
    };
}