/*
 * MULTISETS:
 * Es como el set pero en ello si se pueden agregar datos duplicados
 * */
#include <iostream>
#include <set> // para set y multiset
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cstdlib>

template <typename T>
void addingValues(std::multiset<T>*);

template <typename T>
void showingMultiset(std::multiset<T>*);

template <typename T>
void searchValue(std::multiset<T>*);

template <typename T>
void countElement(std::multiset<T>*);

template <typename T>
void deleteValue(std::multiset<T>*);

int main() {
    std::srand(std::time(NULL)); // Creando un seed
    // creando un multiset dinamico
    std::multiset<int> *values = new std::multiset<int>;

    // agregando valores al multiset
    addingValues(values);
    showingMultiset(values);
    // contar las veces que un elemento existe en un set
    countElement(values);
    searchValue(values);
    deleteValue(values);
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
    std::cout << std::endl;
}

template <typename T>
void searchValue(std::multiset<T>* values)
{
    std::cout << "--Busqueda de un valor--"<< std::endl;
    // pedir al usuario el valor a buscar
    T value;
    std::cout << "Ingrese el valor a buscar: ", std::cin >> value;

    // buscando un valor dentro del multiset
    std::multiset<int>::iterator i = values->find(value);
    if(i != values->end()) std::cout << "El valor " << *i << " si existe en el multiset" << std::endl;
    else std::cout << "No existe ese valor dentro del multiset." << std::endl;
}

template <typename T>
void countElement(std::multiset<T>* values)
{
    std::cout << "--Conteo de un valor en el multiset--" << std::endl;
    T value;
    std::cout << "Ingrese el valor a contar: ", std::cin >> value;

    // buscando el valor solicitado
    int times = values->count(value);
    std::cout << "El numero " << value << " aparece " << times << " veces en el multiset" << std::endl;
}

template <typename T>
void deleteValue(std::multiset<T>* values)
{
    std::cout << "--Eliminar un valor--"<< std::endl;
    T value;

    for(;;)
    {
        std::cout << "Ingrese el valor a eliminar: ", std::cin >> value;

        // Comprobar la existencia de el valor
        std::multiset<int>::iterator i = values->find(value);
        if(i != values->end()) break;
        else std::cout << "No existe ese valor dentro del multiset." << std::endl;
    }
    // Eliminar el valor que existe( si existen valores repetidos del valor a eliminar
    // estos son eliminados del multiset tambien)
    values->erase(value);
}