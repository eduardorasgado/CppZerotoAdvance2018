#include <iostream>

void manipulate(double*);

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

    //==================
    double dValue = 123.4;
    auto *pdValue = &dValue;

    std::cout << "1. dValue: " << dValue << std::endl;
    // passing the pointer with the address of the variable
    manipulate(pdValue);
    // with pointers we can now see the value changed outside the function
    std::cout << "4. dValue: " << dValue << std::endl;

    return 0;
}

// passing the value with pointer and not by value
void manipulate(double *value)
{
    std::cout << "2. value of int manipulate is: " << *value << std::endl;
    // dereferenciate the value
    *value = 10.0;
    std::cout << "3. value of int manipulate is: " << *value << std::endl;
}