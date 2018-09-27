#include <iostream>

using namespace std;

int main(void)
{
    // Correspondencia entre arrays y punteros
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    // guardar la direccion de memoria del primer elemento del vector
    dir_numeros = numeros;

    for(int i = 0;i < 5;i++)
    {
        // *dir_numeros++ esta incrementando la posicion en 4 bytes por vez
        cout << "Elemento"<< i << "alojado en: " << dir_numeros << endl;
        cout << "Elemento [" << i << "] del vector: " << *dir_numeros++ << endl;
    }

    return 0;
}