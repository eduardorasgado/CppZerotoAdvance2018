#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    // Instanciando la clase creada
    Punto point1(2, 1); // OBJETO ESTATICO

    // accediendo a los metodos de la clase creada
    cout << "El valor de x es: "<< point1.getX() << endl;
    cout << "El valor de y es: " << point1.getY() << endl;
    return 0;
}