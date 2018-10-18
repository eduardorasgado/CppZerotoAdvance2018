#include <iostream>
#include "Intercambio.h"

template <typename V>
void requireValues(V&, V&);

int main() {
    int dato1, dato2;
    requireValues(dato1, dato2);

    swapping(dato1, dato2);

    std::cout << "----New values----" << std::endl;
    std::cout << "value 1: " << dato1 << std::endl;
    std::cout << "value 2: " << dato2 << std::endl;
    return 0;
}

template <typename V>
void requireValues(V& v1, V& v2)
{
    V values[] = {v1, v2};
    // requesting the values
    for (int i = 0; i < 2; ++i) std::cout << "Value " << i+1 << ": ", std::cin >> values[i];
    // printing values in the screen
    for (int i = 0; i < 2; ++i) std::cout << "value " << i+1 << ": " << values[i] << std::endl;
    v1 = values[0];
    v2 = values[1];
}