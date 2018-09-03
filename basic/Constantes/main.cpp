/*
Author: Eduardo Rasgado Ruiz
*/
// tanto include como define al ser directivas del procesador no llevan punto
// final
#include <iostream>
// definiendo una constante
#define PI 3.141516

using namespace std;

int main()
{
    // el valor de las constantes no se pueden sobre escribir
    const double gravity = 8.81;

    /**CONSTANTES**/
    cout << PI << endl;
    cout << gravity << endl;

    return 0;
}
