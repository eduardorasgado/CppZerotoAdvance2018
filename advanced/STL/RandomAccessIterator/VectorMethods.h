
#include <iostream>
#include <vector>

// declaraciones
template <typename T>
void showingVector(T, T);

template <typename T>
void pushingElements(std::vector<T>*);

//Definiciones

template <typename T>
void showingVector(T inicio, T final)
{
    // Mostrando el vector usando iteradores de acceso aleatorio
    while(inicio != final)
    {
        std::cout << *inicio << " ";
        inicio++;
    }
}

template <typename T>
void pushingElements(std::vector<T>* myVector)
{
    int N;
    std::cout << "N: ", std::cin >> N;

    T value;
    for (int i = 0; i < N; ++i) {
        std::cout << "Vector[" << i << "]: ", std::cin >> value;
        // agregando el elemento al vector
        myVector->push_back(value);
    }
}