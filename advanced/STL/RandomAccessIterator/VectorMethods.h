
#include <iostream>
#include <vector>

// declaraciones
template <typename T>
void showingVector(T, T, bool);

template <typename T>
void pushingElements(std::vector<T>*);

//Definiciones

template <typename T>
void showingVector(T inicio, T final, bool forward)
{
    // Mostrando el vector usando iteradores de acceso aleatorio
    while(inicio != final)
    {
        std::cout << *inicio << " ";
        if(forward) inicio++;
        else inicio--;
    }
    std::cout << std::endl;
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