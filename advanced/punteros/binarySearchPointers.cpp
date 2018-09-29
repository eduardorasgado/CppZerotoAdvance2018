#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//PROTOTIPOS
void requestLength(int&);
void createVector(int&);
int elementFinder(int&);
int requestToFind();

// GLOBALES
int *vector1;
bool found = false;

//==========================
int main(void)
{
    int N;

    requestLength(N);

    createVector(N);

    int indice = elementFinder(N);
    if(found == true) cout << "El número ha sido encontrado en el indice: " << indice << endl;
    else
        cout << "El numero no fue encontrado" << endl;

    return 0;
}
//==========================

void requestLength(int& N)
{
    cout << "Inserte la longitud de tu vector: ", cin >> N;
}

void createVector(int& N)
{
    vector1 = new int[N];

    for (int i = 0; i < N; ++i)
    {
        cout << "vector[" << i << "]: ", cin >> *(vector1+i);
    }
    cout << endl;
}

int elementFinder(int& N)
{
    int inferior, superior, mitad, dato;
    superior = N-1;
    inferior = 0;

    int number = requestToFind();

    while(inferior <= superior)
    {
        mitad = round(inferior + superior) / 2;
        found = (*(vector1+mitad) == number) ? true : found;
        if(*(vector1+mitad) > number) superior = mitad-1;
        if(*(vector1+mitad) < number) inferior = mitad+1;
    }

    if(found == 1) return mitad;
    return 0;
}

int requestToFind()
{
    int num;
    bool accepted = false;
    int sure;
    while(accepted == false)
    {
        cout << "Que numero desea buscar: ", cin >> num;
        cout << "Seguro? 1. Si 2.No: ", cin >> sure;
        if(sure == 1) accepted = true;
    }
    return num;
}