#include <iostream>
#include "Perro.h"

int main() {
    Perro* fido = new Perro("Fido", "Electrico");
    fido->showData();
    fido->play();

    // DESTRUYENDO EL OBJETO LIBERANDO MEMORIA
    // OBJETO DINAMICO
    delete fido;

    // para DESTRUIR objetos tipo ESTATICO:
    //fido.~Perro();

    return 0;
}