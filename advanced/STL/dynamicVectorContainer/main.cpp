#include <iostream>
#include <vector>

template <typename T>
void requestData(std::vector<T>*);

template <typename T>
void showingVector(std::vector<T>*);

int main() {
    // Creando un vector dinamico del STL
    std::vector<int> *myVector = new std::vector<int>;

    //Incluyendo valores dentro del vector
    requestData(myVector);

    showingVector(myVector);

    return 0;
}

template <typename T>
void requestData(std::vector<T>* myVector)
{
    // Solicitando la longitud del vector para iniciar el ciclo for
    int N;
    std::cout << "Longitud inicial del vector: ", std::cin >> N;

    // Insertando valores en el array dinamico
    T value;
    for (int i = 0; i < N; ++i)
    {
        std::cout << "vector[" << i << "]: ";
        std::cin >> value;
        //guardando el valor del objeto
        myVector->push_back(value);
    }
}

template <typename T>
void showingVector(std::vector<T>* myVector)
{
    // Imprimiendo el vector mediante una iteracion
    for (int i = 0; i < myVector->size(); ++i)
    {
        // accediendo al elemento con el indice dado
        std::cout << myVector->at(i) << " ";
    }
    std::cout << std::endl;
}