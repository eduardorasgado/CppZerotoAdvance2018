#include <iostream>

using namespace std;

template <typename T>
void printNums(T*, T*);

template <typename T>
void swapValues(T*, T*);

int main()
{
    float num1 = 20.8f;
    float num2 = 8.45f;

    float *p_num1 = &num1;
    float *p_num2 = &num2;

    // passing pointers
    printNums(p_num1, p_num2);

    // mixing pointer and mem address
    swapValues(p_num1, &num2);

    // passing address
    printNums(&num1, &num2);

    return 0;
}

template <typename T>
void printNums(T* n1, T *n2)
{
    std::cout << "Number 1 is: " << *n1 << "\n";
    std::cout << "Number 2 is: " << *n2 << "\n";
}

template <typename T>
void swapValues(T*n1, T*n2)
{
    std::cout << "[Swapping]" << std::endl;
    // whithout any aux variable
    // x = 6
    // y = 3
    // y = 6 + 3 = 9
    // x = 9 - 6 = 3
    // y = 9 - 3 = 6

    *n2 = *n2 + *n1;
    *n1 = *n2 - *n1;
    *n2 = *n2 - *n1;
}
