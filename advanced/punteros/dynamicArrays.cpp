/*
 *  ASIGNACION DINAMICA DE ARREGLOS
 *
 *  new: Reserva el numero de bytes solicitado por declaracion
 *  delete: Libera un bloque de bytes reservado con anterioridad
 *
 *  Ejemplo: Pedir al ususarion n calificaciones y almacenarlo en un
 *  arreglo dinamico
 */

#include <iostream>
#include <cstdlib> // Con esta libreria funciona new y delete

using namespace std;

void gradeRequest();
void showGrades();

int numNotes;
// puntero
int *dir_notes;

int main()
{
    gradeRequest();
    showGrades();

    // liberando el espacio en bytes utilizado en el arreglo dinamico
    delete[] dir_notes;
    return 0;
}

void gradeRequest()
{
    cout << "Digite el numero de calificaciones: ", cin >> numNotes;
    // reservado dinamico de memoria
    dir_notes = new int[numNotes]; // creamos el arreglo de tipo dinamico

    for(int i = 0;i < numNotes;i++) cout << "Ingrese notas[" << i << "]: ", cin >> dir_notes[i];
    cout << endl;
}

void showGrades()
{
    cout << "Mostrando notas del usuario: " << endl;
    for(int i = 0;i < numNotes;i++) cout << "Nota " << i+1 << ": " << dir_notes[i] << endl;
}