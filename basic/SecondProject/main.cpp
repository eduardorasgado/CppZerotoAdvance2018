#include <iostream>

using namespace std;

int main()
{
    /*
    TIPOS DE VARIABLES
    int -> integer -> Enteros
    char -> character -> caracter
    float -> Float -> reales eg: valor de PI, fuerza de gravedad
    double -> Double -> reales
    booble -> Boolean -> logicos
    */
    int edad =  25, varx = 30;
    char var2 = 'A';
    float var3 = 3.14, promedioFinal = 15.9;
    double varDouble = 5.3e6;
    // double usando notacion cientifica
    double smallValue = 1.222e-6;
    bool varBool= true;
    edad = 24;

    cout << "Tu edad es de: " << edad << " años" << endl;

    cout << var2 << "\n" << varBool << "\n" << promedioFinal << "\n" << endl;
    cout << "Valor muy pequeño: " << smallValue << "\n" << "Valor muy grande: " << varDouble << endl;

    return 0;
}
