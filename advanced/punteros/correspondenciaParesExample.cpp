#include <iostream>

using namespace std;

void dataRequest(int arreglo[], int);


int main(void)
{
    int arreglo1[10];
    int *dir_arreglo;

    int L = sizeof(arreglo1)/sizeof(*arreglo1);
    dataRequest(arreglo1, L);

    dir_arreglo = arreglo1;

    cout << "Numeros pares del arreglo: " << endl;
    for (int i = 0; i < L; ++i)
    {
        if(*dir_arreglo % 2 == 0) cout << *dir_arreglo << ", en la pocision: " << dir_arreglo << " es par" << endl;
        dir_arreglo++;
    }

    return 0;
}

void dataRequest(int arreglo[], int length)
{
    for(int i = 0;i < length;i++)
    {
        cout << "introduce arreglo[" << i << "]: ", cin >> arreglo[i];
    }

}

