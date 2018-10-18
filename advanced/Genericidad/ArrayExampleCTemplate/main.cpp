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

template <class T>
void selectionFunction(int&, Arreglo<T>*);

int main() {
    //Solicitando la longitud maxima dela rreglo
    int N;
    std::cout << "Numero de elemetos: ", std::cin >> N;
    //Intanciar el arreglo
    //comenzando con un arreglo de enteros de 5 elementos
    Arreglo<int> *arreglo1 = new Arreglo<int>(N);
    int option;
    for(;;)
    {
        showMenu();
        std::cin >> option;
        if(option ==5) break;
        selectionFunction(option, arreglo1);
    }
    // debido a que ya creamos delete[] arreglo dentro del destructor de la clase
    delete arreglo1;

    return 0;
}

void showMenu()
{
    std::cout << "---------MENU-----------" << std::endl;
    std::cout << "1. Agregar una nueva opcion al arreglo." << std::endl;
    std::cout << "2. Comprobar el espacio en el arreglo." << std::endl;
    std::cout << "3. Mostrar el arreglo." << std::endl;
    std::cout << "4. Vaciar el arreglo." << std::endl;
    std::cout << "5. Salir" << std::endl;
    std::cout << "Digite su opcion: " << std::endl;
    std::cout << std::endl;
}

template <class T>
void selectionFunction(int& option, Arreglo<T>* arreglo)
{
    std::cout << "--------------------" << std::endl;
    switch(option)
    {
        case 1:
            //agregar
            T element;
            std::cout << "Agregar elemento: ";
            std::cin >> element;
            arreglo->agregar(element);
            break;
        case 2:
            // comprobar
            if(arreglo->arregloLleno()) std::cout << "Lleno" << std::endl;
            else std::cout << "Disponible" << std::endl;
            break;
        case 3:
            // mostrar
            arreglo->mostrarArreglo();
            break;
        case 4:
            // vaciar
            arreglo->vaciarArreglo();
            break;
        default: std::cout << "Selección invalida" << std::endl;
    }
}