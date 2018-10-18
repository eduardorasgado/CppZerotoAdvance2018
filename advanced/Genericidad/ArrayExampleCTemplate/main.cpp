#include <iostream>
#include "Arreglo.h"
/*
 * TASKS:
 * agregar un nuevo elemento l arreglo
 * Comprobar el espacio en el agrreglo
 * ver arreglo
 * vaciar arreglo
 * salir
 * */

void showMenu();

int main() {
    //Intanciar el arreglo
    //comenzando con un arreglo de enteros de 5 elementos
    Arreglo<int> *arreglo1 = new Arreglo<int>(5);
    showMenu();

    // debido a que ya creamos delete[] arreglo dentro del destructor de la clase
    delete arreglo1;

    return 0;
}

void showMenu()
{
    std::cout << "---------MENU-----------" << std::endl;
}