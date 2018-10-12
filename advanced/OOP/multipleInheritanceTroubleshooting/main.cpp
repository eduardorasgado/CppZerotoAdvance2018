#include <iostream>
#include "ClaseDerivada/ClaseDerivada.h"
#include <cstdlib>

int main() {
    ClaseDerivada* c1 = new ClaseDerivada(1,2,3);
    std::cout << "X base1 llamado con getX ambiguo: " << c1->getX() << std::endl;
    // std::cout << "Hello, World!" << std::endl;
    std::cout << "X de clase base 1: " << c1->getXbase1() << std::endl;

    std::cout << "X de clase base 2: " << c1->getXbase2() << std::endl;

    delete c1;

    return 0;
}