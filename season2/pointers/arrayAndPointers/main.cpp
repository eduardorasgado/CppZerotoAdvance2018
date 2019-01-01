#include <iostream>

using namespace std;

int main()
{
    //----------------------------------
    int numbers[] = {1,2,3,4,5,6,7,8};
    // pointer to array
    int* pNumbers;
    pNumbers = numbers;

    int size = sizeof (numbers)/sizeof (int);
    for(int i = 0; i < size; ++i)
    {
        // going forward from one byte to the next four bytes
        std::cout << "Array["<< i <<"]: " << *pNumbers++ << std::endl;
    }

    //----------------------------------
    int mynums[10];

    for(auto& num : mynums)
    {
        std::cout << "give me a num: ";
        std::cin >> num;
    }

    for(auto& num : mynums) { std::cout << num << " "; }
    std::cout << "\n";

    // pointer to array(at first position)
    int *p_mynums;
    p_mynums = &mynums[0];

    std::cout << "Even numbers: \n";
    int msize = sizeof(mynums)/ sizeof (int);
    for(int i = 0;i < msize; ++i)
    {
        if(*p_mynums % 2 == 0) {
            std::cout << *p_mynums << " is even. | ";
            std::cout << "Memory address: " << p_mynums << "\n";
        }
        *p_mynums++;
    }

    return 0;
}
