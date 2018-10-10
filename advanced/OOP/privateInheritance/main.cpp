#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
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

    std::cout << "====VEHICULO DEPORTIVO(HERENCIA PRIVADA)====" << std::endl;
    Deportivo* d1 = new Deportivo("Mercedes", "Negro", "GZ200", 10);
    std::cout << "Cilindrada: " << d1->getCilindrada() << std::endl;
    // llamando un metodo de la clase derivada que llama a un metodo privado de la clase
    // base
    std::cout << "Marca: " << d1->getMarcaDeportivo() << std::endl;

    delete d1;

    return 0;
}