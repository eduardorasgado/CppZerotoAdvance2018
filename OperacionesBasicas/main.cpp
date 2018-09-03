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
    // division entera
    int cociente = numero1 / numero2;
    cout <<  "El cociente entre " << numero1 << " y " << numero2 << " es: " << cociente << endl;
    cout << 5*5 << endl;
    cout << 7.0/3 << endl;

    /**PRECEDENCIA ARITMETICA**/
    /*
    1. Las operaciones entre parentesis
    2. Multiplicacion , division y modulo
    3. suma y resta
    */
    cout << "PRECEDENCIA ARITMETICA" <<endl;
    cout << 14-8/2*3+1 << endl;
    cout << (14-8)/2*3+1 << endl;
    cout << 14 - (8/2*3) + 1 << endl;
    cout << 14 - 8/2 * (3+1) << endl;
    cout << (14-8)/2 * (3+1) << endl;

    /**OPERADORES LOGICOS**/
    /*
    AND -> &&
    OR -> ||
    NOT -> !
    Igualdad -> =
    Diferente de -> !=
    Menor que -> <
    Mayor que -> >
    Menor o igual a -> <=
    Mayor o igual a -> >=
    */
    cout << "OPERADORES LOGICOS" << endl;
    bool r1 = (true&&true) || false;
    cout << r1 << endl;
    bool r2 = (5==5) || (6!=2) && !(1==1);
    cout << r2 << endl;
    bool r3 = false && true || false;
    cout << r3 << endl;
    bool r4 = (5<3) || (3>=3) || true;
    cout << r4 << endl;
    bool r5 = ((3<=3) && (5<5) || false);
    cout << r5 << endl;

    return 0;
}
