#include <iostream>
/*
Author: Eduardo Rasgado Ruiz
*/
using namespace std;

int main()
{
    /*
    SUMA -> +
    RESTA -> -
    DIVISION -> /
    MULTIPLICACION -> *
    MODULO -> %
    */

    int numero1  = 7;
    int numero2 = 3;
    int mod = numero1%numero2;
    cout << "El modulo de " << numero1 << " % " << numero2 << " es: " << mod << endl;
    int cociente = numero1 / numero2;
    cout <<  "El cociente entre " << numero1 << " y " << numero2 << " es: " << cociente << endl;
    cout << 5*5 << endl;
    return 0;
}
