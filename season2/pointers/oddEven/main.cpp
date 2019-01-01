#include <iostream>

using namespace std;

int main()
{
    int num1, *pnum1;

    // decide if a given number is odd or even
    std::cout << "INsert a number: \n";
    std::cin >> num1;
    pnum1 = &num1;
    std::cout << *pnum1 <<  ((*pnum1 % 2 == 0) ? " is even " : " is odd") << std::endl;
    std::cout << "Memory address is: " << pnum1 << std::endl;

    int num2, *pnum2;
    // prime numbers
    std::cout << "Insert another number: \n";
    std::cin >> num2;
    pnum2 = &num2;

    bool flag = true;
    int i = (*pnum2 == 1) ? 2 : (*pnum2-1);
    while(i > 1)
    {
        if(*pnum2 % i == 0 || *pnum2 == 1) { flag = false; break; }
        --i;
    }
    std::cout << *pnum2 << ((flag) ? " is prime" : " is NOT prime") << std::endl;

    std::cout << *pnum2  << " memory address is: " << pnum2 << std::endl;

    return 0;
}
