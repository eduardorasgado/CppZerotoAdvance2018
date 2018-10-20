/*
 * Iteradores - Random Access Iterators
 * */
#include <iostream>
#include <vector>
#include <cstdlib>
#include "VectorMethods.h"

int main() {
    // Usando iteradores random
    // creando un vector dinamicamente almacenado
    std::vector<float> *myVector = new std::vector<float>;
    //agregndo elementos al vector
    pushingElements(myVector);
    //creando un iterador para nuestro vector
    std::vector<float>::iterator i;
    i = myVector->begin();
    auto f = myVector->end();

    // usando random access iterators para mostrar el vector
    std::cout << "Forward showing..." << std::endl;
    showingVector(i, f, true);

    //i = myVector->end()-1;
    //f = myVector->begin()-1;
    auto ii = myVector->rbegin(); // Apuntar a lo contrario del inicio
    auto ff = myVector->rend(); // lo mismo de arriba pero con el final
    std::cout << "Backward showing..." << std::endl;
    // showingVector(i, f, false);
    showingVector(ii, ff, true);

    std::cout << "Showing elements in the middle..." << std::endl;
    //Visualizar los elementos del medio del vector: (1-2) indices
    showingVector(myVector->begin()+1, myVector->begin()+3,true);
    // tambien podemos hacerlo de la siguiente forma:
    // myVector->end()-1

    delete myVector;

    return 0;
}
