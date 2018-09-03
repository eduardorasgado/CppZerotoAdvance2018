/*
Author: Eduardo Rasgado Ruiz
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*V = 4/3 PI * R^3*/
    const double PI = 3.141516;
    float radio;
    double volume;
    cout << "****CALCULO DEL VOLUMEN DE UNA ESFERA***" << endl;
    cout << "Ingrese el radio de sus esfera: " << endl;
    cin >> radio;

    volume = (4.0/3.0) / PI * pow(radio, 3);

    cout << "El volumen de tu esfera es de: " << volume << endl;

    return 0;
}
