#pragma once

#include <iostream>
#include <cmath>

template <typename T1>
void intercambio(T1& x, T1& y)
{
    T1 aux;
    aux = x;
    x = y;
    y = aux;
}
template <typename T>
void orderUpShellArray(T* list, int N)
{
    // sorted:flag para saber si se ordenaron todos en el intervalo
    int gap = N/2, sorted = 0;
    while(gap >= 1)
    {
        for(int i = 0; i < (N - gap);i++)
            (list[i] > list[i+gap]) ? intercambio(*(list+i), *(list+(i+gap))), sorted++ : 0;
        gap = (sorted == 0) ? floor(gap/2) : gap, sorted = 0;
    }
}

template <typename T>
void orderDownShellArray(T* list, int N)
{
    // sorted:flag para saber si se ordenaron todos en el intervalo
    int gap = N/2, sorted = 0;
    while(gap >= 1)
    {
        for(int i = 0; i < (N - gap);i++)
            (list[i] < list[i+gap]) ? intercambio(*(list+i), *(list+(i+gap))), sorted++ : 0;
        gap = (sorted == 0) ? floor(gap/2) : gap, sorted = 0;
    }
}