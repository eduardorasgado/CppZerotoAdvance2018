#include <iostream>

using namespace std;

int lengthOf();
void dataRequest(int arr[], int);

int main(void)
{
    //  determinar el menor elemento de un arreglo
    int N = lengthOf();

    int myArray[N];
    dataRequest(myArray, N);

    int *dir_myArray;
    dir_myArray = myArray;

    int minor = 99999;
    for (int i = 0; i < N; ++i)
    {
        if(*dir_myArray < minor) minor = *dir_myArray;
        *dir_myArray++;
    }
    cout << "El menor elemento es: " << minor << endl;
    return 0;
}

int lengthOf()
{
    int N;
    bool accepted = false;
    while(accepted == false)
    {
        cout << "Ingresa la longitud de tu vector: ", cin >> N;
        if(N > 0) accepted = true;
    }
    return N;
}

void dataRequest(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << "vector[" << i << "]: ", cin >> arr[i];
    }
    cout << endl;
}