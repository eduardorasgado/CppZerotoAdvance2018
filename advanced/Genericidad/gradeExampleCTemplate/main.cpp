#include <iostream>
#include "Materia.h"

int main() {
    //instanciando los objetos dinamicamente
    Materia<int> *mecanismos = new Materia<int>("Mecanismos", 123513, 8);
    Materia<float> *fluidos = new Materia<float>("Mecánica de Fluidos", 788153, 9.2);
    Materia<char> *ingles = new Materia<char>("Inglés", 215359, 'c');

    mecanismos->showNota();
    fluidos->showNota();
    ingles->showNota();

    //borrando las instancias de la memoria
    delete mecanismos;
    delete fluidos;
    delete ingles;

    return 0;
}