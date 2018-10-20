/*
 * Iteradored - Random Access Iterators
 * */
#include <iostream>
#include <vector>
#include <cstdlib>
#include "VectorMethods.h"

int main() {
    // Usando iteradores bidireccionales
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

    i = myVector->end()-1;
    f = myVector->begin()-1;
    std::cout << "Backward showing..." << std::endl;
    showingVector(i, f, false);

    delete myVector;

    return 0;
}
