#include <iostream>

int main() {
    int nValue = 8;
    // creating a nullpointer
    int *pnValue = nullptr;
    // pointer to nValue address
    pnValue = &nValue;

    // dereference a pointer with *
    std::cout << "Int value: " << *pnValue << std::endl;
    std::cout << "memory address of value: " << pnValue << std::endl;

    // changing nValue through the pointer
    *pnValue = 9;

    std::cout << nValue << std::endl;
    return 0;
}