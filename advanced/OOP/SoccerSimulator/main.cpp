#include <iostream>
#include <cstdlib>
#include "Futbolista/Futbolista.h"

using namespace Soccer;

void printMenu();

int main() {
    Futbolista* f1 = new Futbolista("Teodoro", "Martz", 29, 11, "Delantero");
    int modo;
    printMenu();
    f1->viajar();

    delete f1;

    return 0;
}

void printMenu()
{
    std::cout << "===SOCCER SIMULATOR===" << std::endl;
}