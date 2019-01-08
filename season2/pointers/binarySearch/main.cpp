#include <iostream>
#include <cstdlib>
#include <cmath>

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
    std::cout << "Give me the number: ";
    std::cin >> target;
    int lower = 0;
    auto location = searchNum(arr, lower, N, target);
    if(location == -1) { std::cout << "NUMBER NOT FOUND\n"; }
    else {
        std::cout << "The location of number: " << *(arr+location) << ", is: " << location << "\n";
    }
}

int searchNum(int*arr, int&lower, int&upper, int&target)
{
    //binary search
    int middle = round((upper - lower) / 2)+ lower;
    std::cout << "mid: " << std::to_string(middle) << ", lower: " <<
                 std::to_string(lower) << ", upper: " << std::to_string(upper) << "\n";

    if(lower == middle || upper == middle) return -1;
    // number was found
    if(*(arr+middle) == target) return middle;
    else{
        // searching left of the middle
        if(target < *(arr+middle)) { return searchNum(arr, lower, middle, target); }
        // searching right of the middle
        if(target > *(arr+middle)) { return searchNum(arr, middle, upper, target); }
        // in case number does not exist
    }
    return 0;
}
