#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    // Instanciando la clase creada
    Punto point1(2, 1); // OBJETO ESTATICO

    // accediendo a los metodos de la clase creada
    cout << "El valor de x es: "<< point1.getX() << endl;
    cout << "El valor de y es: " << point1.getY() << endl;

    cout << "=========" << endl;

    // no seteamos nada porque usamos el constructor 2: default
    Punto* point2 = new Punto(); // OBJETO DINAMICO

    //para objetos dinamicos utilizamosla flechita
    point2->setX(4);
    point2->setY(16);

    cout << "El valor de x es: "<< point2->getX() << endl;
    cout << "El valor de y es: " << point2->getY() << endl;
    return 0;
}