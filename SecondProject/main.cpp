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
    double varDouble;
    bool varBool= true;
    edad = 24;

    cout << "Tu edad es de: " << edad << " años" << endl;

    cout << var2 << "\n" << varBool << "\n" << promedioFinal << endl;
    return 0;
}
