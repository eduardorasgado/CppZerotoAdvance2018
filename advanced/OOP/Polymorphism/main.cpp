#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace Figure;

int main() {
    /*
     * POLIMORFOSMO:
     *  Permite que diferentes objetos respondan de modo diferente
     *  al mismo mensaje.
     *
     * CREAR OBJETOS:
     *  No instanciamos usando new, estams creando con un puntero *
     *  o con en nombre de la clase, ejemplo:
     *      Clase c1;
     *
     * INSTANCIAR OBJETOS:
     *  cuando llamamos al objeto con la palabra reservada new
     * */

    // creando dos objetos
    // Figure::Poligono* poligonos[2]
    Poligono* poligonos[2];

    // instanciando los objetos creados
    poligonos[0] = new Rectangulo(7, 4);
    poligonos[1] = new Triangulo(3, 4, 4);

    for(int i = 0; i < 2; i++)
    {
        // Mostrando el polimorfismo
        std::cout << "===Figura " << i+1 << std::endl;
        std::cout << "Area: " << poligonos[i]->area() << std::endl;
        std::cout << "Perimentro: " << poligonos[i]->perimetro() << std::endl;
    }

    return 0;
}