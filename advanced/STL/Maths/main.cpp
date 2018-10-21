/*
 * Algoritmos matematicos
 * */
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>

int main() {
    // creando un vector dinamico
    std::vector<float> *numeros = new std::vector<float>;

    // abrir el archivo en modo lectura
    std::ifstream archivo;
    archivo.open("/home/cheetos/Developer/CProgramming/CppZerotoAdvance2018/advanced/STL/Maths/archivoNumerico.txt", std::ios::in);
    if(archivo.fail())
    {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        std::exit(1);
    }

    // copiamos todos los elementos de archivo hacia el vector numeros
    std::cout << "Copiando del archivo al vector... " << std::endl;
    // creamos un iterador para el inicio del archivo
    // iterador de solo lectura
    std::istream_iterator<float> lectura(archivo);
    // desde, hasta, funcion de lagorithm back inserter(contenedor)
    std::copy(lectura, std::istream_iterator<float>(), std::back_inserter(*numeros));

    // imprimimos el vector
    std::cout << "El vector obtenido es: " << std::endl;
    std::ostream_iterator<float> salida(std::cout, " ");
    std::copy(numeros->begin(), numeros->end(), salida);

    // max_element es una funcion de la biblioteca algorithm
    auto maxElement =  std::max_element(numeros->begin(), numeros->end());
    std::cout << "\n\nEl maximo elemento del vector es: " << *maxElement << std::endl;

    // tambien es una funcion de la biblioteca algorithm
    auto minElement = std::min_element(numeros->begin(), numeros->end());
    std::cout << "\nEl minimo elemento dentro del vector es: " << *minElement << std::endl;

    delete numeros;

    return 0;
}