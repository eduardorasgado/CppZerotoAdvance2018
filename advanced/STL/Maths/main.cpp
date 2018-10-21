/*
 * Algoritmos matematicos
 * */
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <numeric> // funcion accumulate

// funcion para comprobar si un elemento es positivo
template <typename T>
bool positive(T value)
{
    return (value >= 0);
}

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

    // cerrar el archivo
    archivo.close();

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

    // calculemos el valor promedio de los elementos del vector
    // accumulate, funcion de numeric
    // 0.0 es para guardar la suma
    auto sumElements = std::accumulate(numeros->begin(), numeros->end(), 0.0);
    auto promedio = sumElements / numeros->size();
    std::cout << "\nEl promedio de los elementos del vector es: " << promedio << std::endl;

    // calcular y contar cuantos numeros positivos hay en el vector
    // la funcion devuelve un entero
    int totalPositive = std::count_if(numeros->begin(), numeros->end(), positive<float>);
    std::cout << "\nLa cantidad de numeros positivos es: " << totalPositive << std::endl;

    delete numeros;

    return 0;
}