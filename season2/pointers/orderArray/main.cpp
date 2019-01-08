#include <iostream>
#include <cstdlib>

void takeN(int& );
void takeArrayData(int*, int&);
void printData(int*, int&);
void arraySorting(int*, int&);
void swapper(int &, int&);

int main()
{
    int N;
    takeN(N);

    auto arr = new int[N];

    takeArrayData(arr, N);
    printData(arr, N);
    arraySorting(arr, N);

    delete[] arr;
    return 0;
}

void takeN(int& N)
{
    std::cout << "N: ";
    std::cin >> N;
}

void takeArrayData(int* arr, int& N)
{
    //
    for(int i= 0;i < N;++i)
    {
        std::cout << "element["+std::to_string(i)+"]: ";
        std::cin >> *(arr+i);
    }
}

void printData(int* arr, int& N)
{
    //
    std::cout << " Your unordered data is here: \n";
    for(int i= 0;i < N;++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void arraySorting(int* arr, int first_element, int last_element)
{
    //quicksort
    int central = round((forst + last))
}

void swapper(int &a , int& b)
{
    int aux = b;
    b = a;
    a = aux;
}
