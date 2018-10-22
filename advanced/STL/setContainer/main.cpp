/*
 * Contenedores asociativos
 * */
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> // para poder usar los sets y multisets
#include <ctime>

template <typename T>
void addRandomValues(std::set<T>*);

template <typename T>
void showTheSet(std::set<T>*);

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
    return 0;
}

template <typename T>
void addRandomValues(std::set<T>* values)
{
    int N, num;
    std::cout << "Longitud pretendida: ", std::cin >> N;

    std::cout << "Creando valores al azar para el set: " << std::endl;
    for (int i = 0; i < N; ++i)
    {
        num = rand() % N;
        std::cout << num << " ";
        values->insert(num);
    }
    std::cout << std::endl;
}

template <typename T>
void showTheSet(std::set<T>* values)
{
    std::cout << "Mostrando el set: " << std::endl;
    //usamos copy de algorithms
    // creamos el iterador de impresion
    std::ostream_iterator<T> salida(std::cout, " ");
    // usamos el iterador, copiando los elementos a la salida
    std::copy(values->begin(), values->end(), salida);
}