#pragma once

template <typename T>
void swapping(T& dato1, T& dato2)
{
    dato1 = dato1 + dato2;
    dato2 = dato1 - dato2;
    dato1 = dato1 - dato2;
}