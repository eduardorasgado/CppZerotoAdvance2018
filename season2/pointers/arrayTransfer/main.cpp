#include <iostream>

using namespace std;

void readArray(const int*, const int);

template <typename T>
const T getMax(const T*, const int);

template <typename T>
const T getMaxAlternative(const T*, const int);

int main()
{
    const int N = 5;
    int arreglo[N] = {52,5,344,6,55};

    readArray(&arreglo[0], N);

    int* p_arreglo = &arreglo[0];

    // first way
    auto maxNum = getMax(p_arreglo, N);

    std::cout << "[1]: The max number in array is: " << maxNum << "\n";

    // altern way
    auto maxNumAlt = getMaxAlternative(&p_arreglo[0], N);

    std::cout << "[2]: The max number in array is: " << maxNumAlt << "\n";

    return 0;
}

void readArray(const int* A, const int N){
    for(int i =0;i < N; ++i)
    {
        std::cout << *A++ << " ";
    }
    std::cout << "\n";
}

template <typename T>
const T getMax(const T *p_arreglo, const int N)
{
    T max = 0;
    for(int i = 0;i < N; ++i)
    {
        if(*p_arreglo > max) { max = *p_arreglo; }
        *p_arreglo++;
    }
    return max;
}

template <typename T>
const T getMaxAlternative(const T *p_arreglo, const int N)
{
    //
    T max = 0;
    for(int i = 0; i < N; ++i)
    {
        if(*(p_arreglo+i) > max) { max = *(p_arreglo+i); }
    }
    return max;
}
