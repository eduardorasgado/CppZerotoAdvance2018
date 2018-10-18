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
void orderShellArray(T* list, int N, int operation)
// operation 1 = up, 0 = down
{
    // sorted:flag para saber si se ordenaron todos en el intervalo
    int gap = N/2, sorted = 0;
    while(gap >= 1)
    {
        for(int i = 0; i < (N - gap);i++)
        {
            // ordenas ascendentemente
            if(operation == 1)
            {
                (list[i] > list[i+gap]) ? intercambio(*(list+i), *(list+(i+gap))), sorted++ : 0;
            }
            // ordenar descendentemente
            if(operation == 0)
            {
                (list[i] < list[i+gap]) ? intercambio(*(list+i), *(list+(i+gap))), sorted++ : 0;
            }

        }
        gap = (sorted == 0) ? floor(gap/2) : gap, sorted = 0;
    }
}