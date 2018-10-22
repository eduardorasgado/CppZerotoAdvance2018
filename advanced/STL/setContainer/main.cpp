/*
 * Contenedores asociativos
 * */
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // para poder usar los sets y multisets
#include <ctime>
#include <cstdlib>
#include "SetOperations.h"

int main() {
    // SETS
    /*
     * Los elementos del set se agregan y se ordenan automaticamente
     * Asi mismo no pueden contener elementos duplicados
     * */

    std::srand(std::time(NULL)); // agregamos un seed para el rand()

    std::set<int> *values = new std::set<int>; // Creando un set

    // operaciones con el set
    addRandomValues(values);
    showTheSet(values);
    // volviendo a agregar para ver como ignora los duplicados
    //addRandomValues(values);
    //showTheSet(values);

    //busqueda de un elemento dentro del set
    searchInSet(values);
    // eliminando un elemento dentro del set
    poppingFromSeT(values);
    showTheSet(values);

    // borrando el set creado dinamicamente
    delete values;

    return 0;
}
