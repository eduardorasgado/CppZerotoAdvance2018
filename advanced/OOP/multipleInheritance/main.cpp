#include <iostream>
#include "Hidroavion/Hidroavion.h"
#include <cstdlib>

int main() {
    Hidroavion* h1 = new Hidroavion("Juanisimo", "F1", "FE35F5");

    // llamando al metodo del objeto que hereda dos clases
    h1->mostrarDatos();
    /**
     * Podemos acceder a todoo lo publico de sus clases base
     **/
    std::cout << "===Metodos heredados de las clases base===" << std::endl;
    h1->indicarAvion();
    h1->indicarBarco();

    delete h1;

    return 0;
}