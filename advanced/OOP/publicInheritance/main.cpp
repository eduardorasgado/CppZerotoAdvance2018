#include <iostream>
#include "Turismo.h"
#include <cstdlib>

int main() {
    Turismo* t1 = new Turismo("Chevrolet", "Rojo", "G8", 4);

    std::cout << "Número de puertas: " << t1->getNumeroPuertas() << std::endl;
    std::cout << "Color(heredado y usado con getter): " << t1->getColor() << std::endl;

    t1->setColor("Negro");
    std::cout << "Color cambiado: " << t1->getColor() << std::endl;

    // ACCEDIENDO A METODOS PROTEGIDOS
    std::cout << "Modelo(heredado de protegido): " << t1->retornarModelo() << std::endl;

    delete t1;

    return 0;
}