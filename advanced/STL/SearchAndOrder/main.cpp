#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

// funcion de valores aleatorios
int valoresAleatorios()
{
    // hasta el 30
    return rand()%30;
}

// funcion para calcular si un numero es par
template <typename T>
bool isEven(T value)
{
    return (value % 2 == 0);
}

int main() {
    srand(time(NULL));; // creando un seed
    // Busqueda y ordenamiento
    // creando un vector
    std::vector<int> myVector(20);

    // llenando el vector
    std::generate(myVector.begin(), myVector.end(), valoresAleatorios);

    // creando un iterador de salida(cout)
    std::ostream_iterator<int> salida(std::cout, " ");
    // usando el iterador de impresion
    std::copy(myVector.begin(), myVector.end(), salida);

    // fun nuevo vector para almacenar eelementos pares
    std::vector<int> pares;

    // iterador para recorrer el vector
    std::vector<int>::iterator i = myVector.begin();

    /*
     * BUSQUEDA DE ELEMENTOS
     * */
    // buscando los pares y agregandolos a vect pares
    // find if se puede usar para encontrar mas de un elemento en un a}contenedir
    while((i = std::find_if(i, myVector.end(), isEven<int>)) != myVector.end())
    {
        pares.push_back(*i);
        i++;
    }

    std::cout << "\nLos pares del vector son: " << std::endl;
    //imprimir pares
    std::copy(pares.begin(), pares.end(), salida);

    /*
     * IRDENAMIENTO DE ELEMENTOS
     * */
    std::cout << "\nOrdenando el vector pares: " << std::endl;
    // usaremos sort, que forma parte de vector
    std::sort(pares.begin(), pares.end());

    // imprimiendo de nuevo
    std::copy(pares.begin(), pares.end(), std::ostream_iterator<int> (std::cout, " "));

    return 0;
}