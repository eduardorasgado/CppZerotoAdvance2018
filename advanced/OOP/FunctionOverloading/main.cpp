// SOBRECARGA DE FUNCIONES MIEMBRO
#include <iostream>
#include "Persona.h"


using namespace std;

int main() {
    // creando objeto

    Persona* eduardo = new Persona("Eduardo", 24);

    eduardo->Correr();

    cout << "\nPersona 2: " << endl;
    int v = 22;
    Persona* persona2 = new Persona("RARE242535FONAKDJD04");
    persona2->Correr(v);

    return 0;
}