/*
 * Vectors are sequence containers representing arrays that can change in size.
 * Just like arrays, vectors use contiguous storage locations for their elements,
 * which means that their elements can also be accessed using offsets on regular
 * pointers to its elements, and just as efficiently as in arrays. But unlike arrays,
 * their size can change dynamically, with their storage being handled automatically by the container.
 *
 * http://www.cplusplus.com/reference/vector/vector/?kw=vector
 * */

#include <iostream>
#include <vector>

template <typename T>
void showingVector(std::vector<T>);

int main() {
    // Creando un objeto de vector sin acotar y estetico
    std::vector<int> myVector; // Arreglo de enteros

    myVector.push_back(5); // Inserta elementos al final del arreglo
    myVector.push_back(10);
    myVector.push_back(4);
    myVector.push_back(1);
    myVector.push_back(20);

    // Mostrar los elementos del vector
    showingVector(myVector);

    myVector.pop_back(); // Eliminar el ultimo elemento dentro del arreglo

    //===============================
    // Un vector flotante con acotacion -> No viene mucho al caso cuando
    // La ventaja de un vector del stl es el dinamismo del vector
    std::vector<float> myVector2(5);
    // Insertando elementos
    myVector2[0] = 1;
    myVector2[1] = 2;
    myVector2[2] = 3;
    myVector2[3] = 4;
    myVector2[4] = 5;

   showingVector(myVector2);
    return 0;
}

template <typename T>
void showingVector(std::vector<T> myVector)
{
    for (int i = 0; i < myVector.size(); ++i)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;
}