#include <iostream>

using namespace std;

int main()
{
    int N;
    std::cout << "Your size: ";
    std::cin >> N;

    int arreglo[N];
    // pointer to array
    int *p_arreglo = arreglo;

    for(auto& e : arreglo)
    {
        std::cout << "your num: ";
        std::cin >> e;
    }

    int min;
    int size = sizeof (arreglo)/sizeof (int);
    for(int i = 0;i < size; ++i)
    {
        if(i == 0) { min = *p_arreglo; }
        else {
            // getting minimum value inside the array
            if(*p_arreglo < min) { min = *p_arreglo; }
        }
        *p_arreglo++;
    }
    std::cout << "The minimum value in array is: " << min << std::endl;

    return 0;
}
