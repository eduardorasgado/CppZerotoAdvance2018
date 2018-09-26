/*
 * PUNTEROS -DECLARACION DE PUNTEROS
 *  &n = La direccion de memoria de n
 *  *n = Variable que almacena la direccion de memoria
 */
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    int num;
    // variable que almacenara una direccion de memoria
    int *direccion_num;

    num = 4;

    // alamacenando la direccion de memoria
    direccion_num = &num;

    // aqui le decimo a cout que imprima lo que encuentre en la direccion
    // de memoria que le pasamos
    cout << "Número: " << *direccion_num << endl;
    // una referencia de la direccion de memoria de una variable
    cout << "Direcccion de memoria: " << direccion_num << endl;
    return 0;
}