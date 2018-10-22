/*
 * MAPS
 * Maps are associative containers that store elements in a mapped fashion.
 * Each element has a key value and a mapped value.
 * No two mapped values can have same key values.
 * */
#include <iostream>
#include <iterator>
#include <map> // para poder usar el map y multimap

template <typename T1, typename T2>
void addingValues(std::map<T1, T2>*);

// definimos una estructura que define un alias
typedef std::pair<int, std::string> par;

int main() {
    // clave, valor
    // se ordenan segun la clave
    // creando un map dinamicamente alojado
    std::map<int, std::string> *values = new std::map<int, std::string>;

    //insertando elementos dentro del mapa
    addingValues(values);

    delete values;
    return 0;
}

template <typename T1, typename T2>
void addingValues(std::map<T1, T2>* values)
{
    int N;
    std::string word; // para guardar el valor del mapa
    std::cout << "Ingresar la longitud del mapa: ", std::cin >> N;

    for (int i = 0; i < N; ++i) {
        // Introducimos el valor de nuestro string: (clave, valor(el string))
        std::cout << "[" << i << "]-> valor: ", std::cin >> word;

        // utilizamos una estructura de tipo pair para guardar elementos en el mapa
        // values->insert(std::pair<T1, T2>(i, word));
        // Usando el typedef definido antes del main:
        values->insert(par(i, word));
    }
}