#include <iostream>
#include "Alumno.h"

using namespace std;

int requestN();
void requestingData(Alumno *, int&);
void showingData(Alumno *, int&);

int main() {
    // CREANDO ARREGLO DE OBJETOS

    int N = requestN();

    // ARREGLO ESTATICO DE OBJETOS
    Alumno alumnos[N];

    // ARREGLO DINAMICO DE OBJETOS
    Alumno* alumnos2 = new Alumno[N];

    requestingData(alumnos2, N);

    showingData(alumnos2, N);

    return 0;
}

int requestN()
{
    int N;
    cout << "Ingrese la cantidad de elemento de sus objetos: ";
    cin >> N;
    return N;
}

void requestingData(Alumno* alumnos2, int& N)
{
    for (int i = 0; i < N; ++i) {
        (alumnos2 + i)->requestData();
        cout << endl;
    }
}

void showingData(Alumno* alumnos2, int& N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << "====ALUMNO " << i+1 << "=====" << endl;
        (alumnos2+i)->showNotes();
        cout << endl;
    }
}