/*
 * Explorando la libreria de algoritmos
 * */
#include <iostream> // para usar cout
#include <list> // para crear llistas doblemente enlazadas
#include <algorithm> // para usar copy y generate
#include <iterator> // lpara usar onstream_iterator
#include <cstdlib> // para poder usar el rand
#include <ctime> // para usar time

int numerosAleatorios();

int main() {
    srand(time(NULL)); // creando un seed para rand

    std::list<int> valores(10); // creando lists de diez elementos enteros

    // generate viene de la libreria algorithm
    std::generate(valores.begin(), valores.end(), numerosAleatorios); // llenaremos la lista con numeros aleatorios

    // ocuparemos la libreria iterator
    // este operador solo es util para imprimir en pantalla
    std::ostream_iterator<int> salida(std::cout, " "); // ostream se utiliza con el cout

    // funcion dentro de algorithm: copy
    // copia valores de un determinado inicio a uno final, copiandolo hacia -> salida(consola)
    std::copy(valores.begin(), valores.end(), salida); // mostrando los  elementos de la lista

    std::cout << std::endl;

    //buscando la primera vez que aparezca un 8 en la lista
    std::list<int>::iterator i;

    // buscar un elemento dentro de la lista con la biblioteca algorithm
    i = std::find(valores.begin(), valores.end(), 8);

    if(i != valores.end()) std::cout << "El elemento " << *i << " ha sido encontrado en la lista" << std::endl;
    else std::cout << "El elemento no ha sido encontrado" << std::endl;

    return 0;
}

int numerosAleatorios()
{
    // generando numeros aleatorios
    // del cero al 10
    return rand()%10;
}