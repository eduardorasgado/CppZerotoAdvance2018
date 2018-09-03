#include <iostream>

using namespace std;

int main()
{
    float base;
    float altura;

    cout << "***CALCULO DE AREA DE UN TRIANGULO***" << endl;
    cout << "Ingresa la base de tu triangulo: " << endl;
    cin >> base;
    cout << "Ingresa la altura de tu triangulo: " << endl;
    cin >> altura;
    cout << "El área de tu triangulo es: " << (base * altura) / 2 << endl;
    return 0;
}
