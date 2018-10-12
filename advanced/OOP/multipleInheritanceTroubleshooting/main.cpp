#include <iostream>
#include "ClaseDerivada/ClaseDerivada.h"
#include <cstdlib>

int main() {
    ClaseDerivada* c1 = new ClaseDerivada(1,2,3);
    std::cout << "X clase derivada: " << c1->getX() << std::endl;
    // std::cout << "Hello, World!" << std::endl;

    delete c1;

    return 0;
}