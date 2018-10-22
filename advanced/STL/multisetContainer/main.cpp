/*
 * MULTISETS:
 * Es como el set pero en ello si se pueden agregar datos duplicados
 * */
#include <iostream>
#include <set> // para set y multiset
#include <algorithm>
#include <iterator>
#include <ctime>

template <typename T>
void addingValues(std::multiset<T>*);

template <typename T>
void showingMultiset(std::multiset<T>*);

int main() {
    std::srand(std::time(NULL)); // Creando un seed
    // creando un multiset dinamico
    std::multiset<int> *values = new std::multiset<int>;

    // agregando valores al multiset
    addingValues(values);
    showingMultiset(values);

    // borrando el muliset de la memoria
    delete values;
    return 0;
}

template <typename T>
void addingValues(std::multiset<T>* values)
{
    int N, num;
    // Solicitando la longitud del multiset
    std::cout << "Longitud: ", std::cin >> N;

    std::cout << "Insertando elementos al multiset..." << std::endl;
    // los elementos aleatorios entre 0 y la longitud del multiset
    for (int i = 0; i < N; ++i)
    {
        num = rand() % N;
        values->insert(num);
    }
}

template <typename T>
void showingMultiset(std::multiset<T>* values)
{
    // creando un iterador de salida
    std::ostream_iterator<T> salida(std::cout, " ");
    // usando ese iterador
    std::copy(values->begin(), values->end(), salida);
}