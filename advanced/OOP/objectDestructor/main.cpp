#include <iostream>
#include "Perro.h"

int main() {
    Perro* fido = new Perro("Fido", "Electrico");
    fido->showData();
    fido->play();

    return 0;
}