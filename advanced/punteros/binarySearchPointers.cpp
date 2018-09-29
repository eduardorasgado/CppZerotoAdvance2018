#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

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
    if (indice != -1) cout << "El número ha sido encontrado en el indice: " << indice << endl;
    else cout << "NO FUE ENCONTRADO" << endl;

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

    int inferior, superior, mitad;
    superior = N-1;
    inferior = 0;

    int number = requestToFind();

    cout << "the number is " << number << endl;
    for (int i = 0; i < superior; ++i) {
        cout << vector1[i] << " ";
    } cout << endl;

    while(inferior <= superior)
    {
        mitad = (inferior + superior) / 2;
        if (vector1[mitad] == number)
        {
            found = true;
            break;
        }
        // cout << "mitad: " << mitad << ", vector[]: " << vector1[mitad] << " ";
        if(vector1[mitad] > number) superior = mitad-1;
        if(vector1[mitad] < number) inferior = mitad+1;
    }

    if(found == true) return mitad;
    return -1;

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