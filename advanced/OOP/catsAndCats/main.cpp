/*
 * Mamifero
 * Felino
 * Gato Domestico
 *
 * Gatos:
 * minino gatoDomestico
 * estrellaCirco felino
 * Atributos  y metodos:
 * dieta de gato
 * año y lugar de nacimiento
 *nombreOwner -> poder cambiarla
 * raza
 * circo -> cambiar nombre de circo del felino
 *
 */

#include <iostream>
#include "Felino/Felino.h"
#include "GatoDomestico/GatoDomestico.h"

using namespace Animals;

void imprimirComidas(Felino*);
void imprimirComidas(GatoDomestico*);

int main() {
    GatoDomestico* minino = new GatoDomestico(2017, "Oaxaca,MX", "Meztizo", "Eduardo");
    Felino* estrellaCirco = new Felino(2015, "Guadalajara", "Pedorra", "Papillon");

    imprimirComidas(minino);
    imprimirComidas(estrellaCirco);

    delete minino;

    return 0;
}

void imprimirComidas(Felino* f)
{
    std::cout << "Dieta de Felino: ";
    std::cout << f->imprimirDieta();
    std::cout << std::endl;
}

void imprimirComidas(GatoDomestico* g)
{
    std::cout << "Dieta de GatoDomestico: ";
    std::cout << g->imprimirDieta();
    std::cout << std::endl;
}