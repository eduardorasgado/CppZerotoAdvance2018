#include <iostream>

using namespace std;

int findMax(int *, int);

int main(void)
{
    int numbers[] = {3,5,2,8,1,12,4};

    const int nElements = sizeof(numbers)/ sizeof(*numbers);

    // no es necesario ahora hacer el puntero,
    // le pasamos la direccion de memoria del primer elemento
    // del arreglo, solo pasandole el arreglo mismo
    int max = findMax(numbers, nElements);

    cout << "El valor maximo de el arreglo es: " << max << endl;
    return 0;
}

int findMax(int *numbers, int N)
{
    int max = 5;

    for (int i = 0; i < N; ++i)
    {
        if(*numbers > max) max = *numbers;
        *numbers++;
    }
    return max;
}