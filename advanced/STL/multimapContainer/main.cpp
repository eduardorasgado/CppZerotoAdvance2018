/*
 * MULTIMAP
 *
 * Multimap is similar to mapwith an addition that multiple elements can have same keys.
 * Rather than each element being unique, the key value and mapped value pair has to be unique in this case.
 * */
#include <iostream>
#include <iterator>
#include <map>
#include <cstdlib>

template <typename T1, typename T2>
void insertingValues(std::multimap<T1, T2>*);

template <typename T1, typename T2>
void showingMultiMap(std::multimap<T1, T2>*);

template <typename T1, typename T2>
void countMultiElement(std::multimap<T1, T2>*);

// creando un alias de valor
typedef std::pair<char, std::string> par;

int main() {
    // creando un multimap dinamicamente alojado
    std::multimap<char, std::string> *valores = new std::multimap<char, std::string>;

    //insertar valores
    insertingValues(valores);
    showingMultiMap(valores);
    countMultiElement(valores);

    // eliminando el multimap de la mememoria antes de terminar el programa
    delete valores;

    return 0;
}

template <typename T1, typename T2>
void insertingValues(std::multimap<T1, T2>* valores)
{
    int N;
    char key;
    std::string value;
    std::cout << "Introduce la longitud de los primeros valores: ", std::cin >> N;
    // usamos un objeto que toma dos valores llamado pair
    // que definimos arriba de la funcion main
    for (int i = 0; i < N; ++i)
    {
        std::cout << "Llave " << i << ": ", std::cin >> key;
        std::cout << "[" << key << "]: ", std::cin >> value;
        valores->insert(par(key, value));
    }
}

template <typename T1, typename T2>
void showingMultiMap(std::multimap<T1, T2>* valores)
{
    std::cout << "--Mostrando multimap--" << std::endl;
    // imprimiendo las claves y los valores de un multiset con un iterador
    std::multimap<char, std::string>::iterator i;
    for(i = valores->begin(); i != valores->end();i++) std:: cout << "[" << i->first << "]: " << i->second << std::endl;
}

template <typename T1, typename T2>
void countMultiElement(std::multimap<T1, T2>* valores)
{
    // conteo de las claves
    T1 key;
    std::cout << "Introduzca el valor a contar: ", std::cin >> key;

    int counter = valores->count(key);
    std::cout << "La clave " << key << " se repite: " << counter << " veces." << std::endl;
    // lower_bound me va a devolver la primera vez que me aparezca la clave
    // y lo va a tomar como iterador
    // upper_bound me va a devolver la ultima coincidencia de la clave
    std::multimap<char, std::string>::iterator i;
    for (i = valores->lower_bound(key); i != valores->upper_bound(key); ++i)
    {
        // mostrando el valor de cada una de las coincidencias de la clave dada
        std::cout << "[" << i->first << "]: " << i->second << std::endl;
    }
    std::cout << std::endl;
}