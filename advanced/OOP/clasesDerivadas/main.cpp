#include <iostream>
#include "Triangulo.h"

int main() {
    Triangulo* t1 = new Triangulo(3, 5, 6, 7);

    std::cout << "Lados: " << t1->getnLados() << std::endl;

    std::cout << "Area: " << t1->areaTriangulo() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}