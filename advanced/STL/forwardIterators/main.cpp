/*
 * Iterators - Forward Iterators
 *
 * Solamente para avanzar hacia adelante en nuestro container
 * */
#include <iostream>
// para leer archivos externos
#include <fstream>
#include <iterator>
#include <vector>
#include <cstdlib>

template <typename T>
void showingVector(std::vector<T>);

int main() {
    std::ifstream archivo;

    // abriendo el archivo guardado en la misma carpeta
    archivo.open("/home/cheetos/Developer/CProgramming/CppZerotoAdvance2018/advanced/STL/forwardIterators/documento.txt", std::ios::in);

    if(archivo.fail())
    {
        std::cout << "No fue posible abrir el archivo" << std::endl;
        // saliendo con un error, exit viene de cstdlib
        std::exit(1);
    }

    std::istream_iterator<char> p(archivo); // creando un iterador para char
    // vector para guardar todos los chars del documento
    std::vector<char> v1;

    while(!archivo.eof()) // Mientras no sea el final del archivo
    {
        // guardando cada caracter dentro del archivo
        v1.push_back(*p);
        p++;
    }

    //Mostrando el vector
    showingVector(v1);

    // cerrando un archivo
    archivo.close();

    return 0;
}

template <typename T>
void showingVector(std::vector<T> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        // imprimir el elemento del vector en el indice i
        std::cout << v.at(i);
    }
    std::cout << std::endl;
}