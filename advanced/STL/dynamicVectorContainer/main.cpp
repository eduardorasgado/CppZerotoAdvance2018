#include <iostream>
#include <vector>
#include <cstdlib>
#include "VectorMethods.h"

int main() {
    std::cout << "==== VECTORES DE LA STL (DINAMICOS) ====" << std::endl;

    // Creando un vector dinamicamente almacenado del STL
    std::vector<int> *myVector = new std::vector<int>;

    //Incluyendo valores dentro del vector
    requestData(myVector);

    showingVector(myVector);

    poppingBack(myVector);

    showingVector(myVector);

    eraseSelected(myVector);

    showingVector(myVector);

    changeElement(myVector);

    showingVector(myVector);

    delete myVector;

    return 0;
}
