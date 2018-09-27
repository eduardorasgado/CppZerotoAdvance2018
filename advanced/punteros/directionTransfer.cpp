#include <iostream>

using namespace std;

void swapping(float *, float *);

int main()
{
    float number = 5.3, number2 = 24.34;

    cout << "Primer numero: " << number << endl;
    cout << "Segundo numero: " << number2 << endl;
    cout << endl;

    // pasar con referencia de direccion de memoria
    swapping(&number, &number2);

    cout << "Despues del intercambio: " << endl;
    cout << "Primer numero: " << number << endl;
    cout << "Segundo numero: " << number2 << endl;

    return 0;
}

void swapping(float *num1, float *num2)
{
    // sin un auxiliar
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1- *num2;
}