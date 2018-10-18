#include <iostream>
#include "Ordenar.h"
#include <cstdlib>

void requestN(int&);

template <typename TL>
void requestData(TL*, int&);

template <typename L>
void showList(L* list, int N);

int *listToOrder;

int main() {
    // list of numbers
    int N;
    requestN(N);
    // creando un array o lista dinamica
    listToOrder = new int[N];

    requestData(listToOrder, N);
    showList(listToOrder, N);

    std::cout << "----Ordering your array(up)----" << std::endl;
    orderShellArray(listToOrder, N, 1);
    showList(listToOrder, N);

    std::cout << "----Ordering your array(Down)----" << std::endl;
    orderShellArray(listToOrder, N, 0);
    showList(listToOrder, N);

    delete[] listToOrder;
    return 0;
}

void requestN(int& N)
{
    std::cout << "Longitud de tu arreglo: ";
    std::cin >> N;
}

template <typename TL>
void requestData(TL* list, int& N)
{
    // Solicitar los datos de la lista
    for (int i = 0; i < N; ++i)
    {
        std::cout << "list[" << i << "]: ", std::cin >> *(list+i);
    }
}

template <typename L>
void showList(L* list, int N)
{
    for(int i = 0; i < N;i++)
    {
        if(i == 0) std::cout << "[ ";
        std::cout << *(list+i) << " ";
        if(i == (N-1)) std::cout << "]" << std::endl;
    }
}