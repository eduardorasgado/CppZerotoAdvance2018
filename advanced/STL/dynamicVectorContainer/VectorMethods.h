#pragma once
#include <iostream>
#include <vector>

// Declaraciones

template <typename T>
void requestData(std::vector<T>*);

template <typename T>
void showingVector(std::vector<T>*);

template <typename T>
void poppingBack(std::vector<T>*);

template <typename T>
void eraseSelected(std::vector<T>*);

template <typename T>
void changeElement(std::vector<T>*);

// Definiciones

template <typename T>
void requestData(std::vector<T>* myVector)
{
    // Solicitando la longitud del vector para iniciar el ciclo for
    int N;
    std::cout << "Longitud inicial del vector: ", std::cin >> N;

    // Insertando valores en el array dinamico
    T value;
    for (int i = 0; i < N; ++i)
    {
        std::cout << "vector[" << i << "]: ";
        std::cin >> value;
        //guardando el valor del objeto
        myVector->push_back(value);
    }
}

template <typename T>
void showingVector(std::vector<T>* myVector)
{
    std::cout << "Imprimiendo mi vector: " << std::endl;
    // Imprimiendo el vector mediante una iteracion
    for (int i = 0; i < myVector->size(); ++i)
    {
        // accediendo al elemento con el indice dado
        std::cout << myVector->at(i) << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void poppingBack(std::vector<T>* myVector)
{
    std::cout << "Borrando el ultimo elemento de mi arreglo, con pop_back" << std::endl;
    // borrando el ultimo elemento dentro del arreglo dinamico
    myVector->pop_back();
}

template <typename T>
void eraseSelected(std::vector<T>* myVector)
{
    std::cout << "Borrando los elementos entre un intervalo, con erase." << std::endl;
    /*
    * eliminar desde la pocision inicial hasta la posicion dos menos uno
    * Este metodo tambien recorre los valores que van despues de la posicion dos
    * hsta la primera posicion disponible a la derecha una vez eliminados los valores
    * seleccionados
     *
     * Ejemplo: [ 5 10 1 15 20 ] -> [ 5 15 20 ]
    */
    myVector->erase(myVector->begin()+1, myVector->begin()+3);
}

template <typename T>
void changeElement(std::vector<T>* myVector)
{
    std::cout << "Modificando un elemento dentro de mi vector" << std::endl;
    //modificando un elemento dentro de mi vector
    myVector->at(0) = 12;
}