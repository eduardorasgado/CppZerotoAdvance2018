#pragma once

#include <iostream>

namespace Figure
{
    // clase abstracta
    class Poligono
    {
        public:
            // funciones virtuales puras
            virtual float perimetro( ) = 0;
            virtual float area( ) = 0;
    };
}