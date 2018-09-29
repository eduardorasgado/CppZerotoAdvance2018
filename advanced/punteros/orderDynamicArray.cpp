#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void requestData(int&);
void requestArray(int&);
void quickSortAlgorithm(int numeros[], int, int);
void swapper(int&, int&);
void showArray(int num_arr[], int&);

int *num_arr;

int main(void)
{
    int N;

    requestData(N);

    requestArray(N);

    //arraySorter(N);

    quickSortAlgorithm(num_arr, 0, N-1);

    showArray(num_arr, N);

    delete[] num_arr;

    return 0;
}

void requestData(int& N)
{
    cout << "Introducir la longitud de tu arreglo: ", cin >> N;
}

void requestArray(int& N)
{
    num_arr = new int[N];

    for (int i = 0; i < N; i++) cout << "array[" << i << "]: ", cin >> *(num_arr+i);
    cout << endl;
}

void quickSortAlgorithm(int numeros[], int primero, int ultimo)
{
    int central = round((primero + ultimo) / 2);
    int pivote = numeros[central];
    int i = primero, j = ultimo;
    do
    {
        // pasando menores y mayores de lado izquierdo y derecho del pivot
        while(numeros[i] < pivote) i++;
        while(numeros[j] > pivote) j--;
        if (i <= j) swapper(numeros[i], numeros[j]), i++, j--;
    } while(i <= j);  // cuando i y j se crucen, se acaba
    // Ordenar sublista izquierda
    if (primero < j) quickSortAlgorithm(numeros, primero, j);
    // Ordenar sublista derecha
    if (i < ultimo) quickSortAlgorithm(numeros, i, ultimo);
}

void swapper(int &a,int &b)
{
    int aux = b;
    b = a;
    a = aux;
    //a = a + b;
    //b = a - b;
    //a = a - b;
}

void showArray(int num_arr[], int& N)
{
    for (int i = 0; i < N; i++) cout << num_arr[i] << " ";
    cout << endl;
}