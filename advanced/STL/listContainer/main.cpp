/*
 * Lists are sequence containers that allow constant time insert and erase operations
 * anywhere within the sequence, and iteration in both directions.
 *
 * List containers are implemented as doubly-linked lists; Doubly linked lists can store
 * each of the elements they contain in different and unrelated storage locations.
 * The ordering is kept internally by the association to each element of a link to the
 * element preceding it and a link to the element following it.
 *
 * http://www.cplusplus.com/reference/list/list/?kw=list
 * */
#include <iostream>
#include <list>

template <typename T>
void showingList(std::list<T>);

template <typename T>
void poppingList(std::list<T>);

int main() {
    //Creando una lista estática
    std::list<int> datos;

    //agregar elementos por el final de la lista
    datos.push_back(5);
    datos.push_back(1);
    datos.push_back(6);

    // Agregar elementos por el principio de la lista
    datos.push_front(2);
    datos.push_front(7);

    showingList(datos);

    // Ordenamos la lista
    std::cout << "Ordenando la lista." << std::endl;
    datos.sort();

    showingList(datos);

    poppingList(datos);

    return 0;
}

template <typename T>
void showingList(std::list<T> datos)
{
    // con la lista ya no podemos usr un i con un ciclo for
    // Al no tener acceso aleatorio

    // Recorrer e imprimir los elementos de la llista
    std::list<int>::iterator i;
    //inicializando el iterador
    i = datos.begin();
    //mientras i no sea igual al indice del valor final de la lista
    while(i !=datos.end())
    {
        // apuntaremos a la pocision de memoria de nuestro elemento
        // asi que desreferenciamos con *
        std::cout << *i << " ";
        i++;
    }
    std::cout << std::endl;
}

template <typename T>
void poppingList(std::list<T> datos)
{
    // Eliminar elementos de la lista
    //Eliminar al frente
    std::cout << "Eliminando datos al frente." << std::endl;
    datos.pop_back();
    showingList(datos);

    // Eliminar al final
    std::cout << "Eliminando datos al final." << std::endl;
    datos.pop_front();
    showingList(datos);
}