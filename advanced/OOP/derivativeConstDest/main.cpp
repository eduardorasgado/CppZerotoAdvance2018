#include <iostream>
#include "ClaseDerivada.h"
#include <cstdlib>

int main() {
    /*
     * Primero se ejecuta el constructor de la clase padre
     * y despues el constructor de la clase derivada o hija
     * */
    ClaseDerivada* objeto1 = new ClaseDerivada(5, 10);

    std::cout << std::endl;

    // Primero se ejecuta el destructor de la clase hija y
    // despues la de la clase padre
    delete objeto1;

    /**
     * RESUMEN:
     * Los constructores y los destructores de las clases
     * en la herencia van entrelazados o van ligados
     **/

    return 0;
}