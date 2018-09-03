/*
Author: Eduardo Rasgado Ruiz
*/
#include <iostream>
#include <cmath> // libreria math.h
using namespace std;

int main()
{
    /**CMATH LIBRARY**/
    double potencia = pow(5,2);
    double raiz = sqrt(81.0);

    double angle = 0.523599; // seno de 30 grados
    double seno = sin(angle);

    double coseno = cos(1.0472); // coseno de 60 grados
    double tangente = tan(0.785398); // tangente de 45 grados

    // printing everything
    cout << potencia << endl;
    cout << raiz << endl;
    cout << seno << endl;
    cout << coseno << endl;
    cout << tangente << endl;

    return 0;
}
