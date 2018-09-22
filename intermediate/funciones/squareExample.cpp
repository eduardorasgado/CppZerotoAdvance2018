#include <iostream>

using namespace std;

// prototipo de la funcion
template <class TYPED>
void al_cuadrado(TYPED numero);

int main(int argc, char** argv)
{
        int num1 = 5;
        float num2 = 4.2;
        double num3 = 14364.5556;

        al_cuadrado(num1);
        al_cuadrado(num2);
        al_cuadrado(num3);
        return 0;
}

template <class TYPED>
void al_cuadrado(TYPED numero)
{
        cout << "El cuadrado del numero " << numero << " es: " << numero * numero << endl;
}
