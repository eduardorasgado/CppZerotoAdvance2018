/*
 * Mamifero
 * Felino
 * Gato Domestico
 * Tareas:
 * a) Declarar un objeto llamado minino de tipo GatoDomestico
 *  y otro llamado estrellaCirco de tipo Felino
 * b) Imprimir la dieta de minino y de estrella circo
 * c) Imprimir el año y lugar de nacimiento de los dos gatos
 * d) Cambiar el nombre del dueño de minino
 * e) imprimir la raza de minino y de estrellaCirco
 * f) Cambiar el nombre del circo en el que actua
 * estrellaCirco
 *
 */

#include <iostream>
#include "Felino/Felino.h"
#include "GatoDomestico/GatoDomestico.h"

using namespace Animals;

void imprimirComidas(Felino*);
void imprimirComidas(GatoDomestico*);
void imprimirNacimiento(Felino*);
void imprimirNacimiento(GatoDomestico*);
void changeCatOwner(GatoDomestico*);
void imprimirRaza(Felino*);
void imprimirRaza(GatoDomestico*);
void changeCircus(Felino*);

int main() {
    GatoDomestico* minino = new GatoDomestico(2017, "Oaxaca,MX", "Meztizo", "Eduardo");
    Felino* estrellaCirco = new Felino(2015, "Guadalajara", "Pedorra", "Papillon");

    imprimirComidas(minino);
    imprimirComidas(estrellaCirco);
    std::cout << std::endl;
    imprimirNacimiento(minino);
    imprimirNacimiento(estrellaCirco);

    std::cout << std::endl;
    //cmabiando n minino de dueño
    changeCatOwner(minino);

    std::cout << std::endl;
    imprimirRaza(minino);
    imprimirRaza(estrellaCirco);

    std::cout << std::endl;
    changeCircus(estrellaCirco);

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

void imprimirNacimiento(Felino* f)
{
    //
    std::cout << "lugar de nacimiento de Felino: ";
    std::cout << f->getBirthPlace();
    std::cout << std::endl;
    std::cout << "Año de nacimiento de felino: ";
    std::cout << f->getBirthYear();
    std::cout << std::endl;
}

void imprimirNacimiento(GatoDomestico* g)
{
    //
    std::cout << "lugar de nacimiento de GatoDomestico: ";
    std::cout << g->getBirthPlace();
    std::cout << std::endl;
    std::cout << "Año de nacimiento de GatoDomestico: ";
    std::cout << g->getBirthYear();
    std::cout << std::endl;
}

void changeCatOwner(GatoDomestico* g)
{
    std::cout << "Dueño de minino: ";
    std::cout << g->getNombreOwner();
    std::cout << std::endl;

    g->setNombreOwner("Franco");

    std::cout << "Dueño de minino: ";
    std::cout << g->getNombreOwner();
    std::cout << std::endl;
}

void imprimirRaza(Felino* f)
{
    //
    std::cout << "Raza de Felino: ";
    std::cout << f->getRaza();
    std::cout << std::endl;
}
void imprimirRaza(GatoDomestico* g)
{
    //
    std::cout << "Raza de Gato domestico: ";
    std::cout << g->getRaza();
    std::cout << std::endl;
}

void changeCircus(Felino* f)
{
    std::cout << "Circo de gato: ";
    std::cout << f->getNombreCirco();
    std::cout << std::endl;

    f->setNombreCirco("Pantomimas");

    std::cout << "Circo de gato: ";
    std::cout << f->getNombreCirco();
    std::cout << std::endl;
}

