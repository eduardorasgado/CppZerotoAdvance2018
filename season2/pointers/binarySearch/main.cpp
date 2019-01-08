#include <iostream>
#include <cstdlib>

void takeN(int&);
void fillArray(int*, int&);
void printData(int *, int&);
void searchLogic(int*, int&);
int searchNum(int*, int&, int&, int&);

int main()
{
    int N;
    takeN(N);

    auto arr = new int[N];
    fillArray(arr, N);
    printData(arr, N);

    searchLogic(arr, N);

    delete[] arr;
    return 0;
}

void takeN(int& N)
{
    std::cout << "N: ";
    std::cin >> N;
}


void fillArray(int *arr, int& N)
{
    //
    std::cout << "Getting data:\n";
    for(int i = 0;i < N;++i)
    {
        std::cout << "value["+std::to_string(i)+"]: ";
        std::cin >> *(arr+i);
    }
}

void printData(int *arr, int& N)
{
    //
    for(int i = 0;i < N;++i)
    {
        std::cout << *(arr+i) << " ";
    }
    std::cout << "\n";
}

void searchLogic(int* arr, int&N)
{
    //
    int target;
    std::cout << "[SEACH A NUMBER IN ARRAY]\n";
    std::cin >> target;
    int lower = 0;
    auto location = searchNum(arr, lower, N, target);
    std::cout << "The location of number: " << *(arr+location) << ", is: " << location << "\n";
}

int searchNum(int*arr, int&lower, int&upper, int&target)
{
    //
    return 0;
}
