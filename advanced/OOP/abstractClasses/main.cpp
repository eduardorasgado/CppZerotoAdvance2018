#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHervivoro.h"

#include <cstdlib>

int main() {
    Planta* planta1 = new Planta();
    planta1->alimentarse();

    AnimalCarnivoro* animal1 = new AnimalCarnivoro();
    animal1->alimentarse();

    AnimalHervivoro* animalh1 = new AnimalHervivoro();
    animalh1->alimentarse();

    delete planta1;
    delete animal1;
    delete animalh1;
    return 0;
}