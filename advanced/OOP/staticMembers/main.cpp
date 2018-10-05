#include <iostream>
#include "Estatico.h"

void getCounter(Estatico *);

int main() {
    // creando objeto
    Estatico* object1 = new Estatico();

    getCounter(object1);

    // objeto 2
    Estatico* object2 = new Estatico();

    getCounter(object2);

    // objeto 3
    Estatico* object3 = new Estatico();

    getCounter(object3);
    return 0;
}

void getCounter(Estatico *ob)
{
    std::cout << "Contador: " << std::endl;
    std::cout << ob->getContador() << std::endl;
}