#include <iostream>
#include <cstdlib>
#include <cmath>

void takeN(int& );
void takeArrayData(int*, int&);
void printData(int*, int&);
void arraySorting(int*, int, int);
void swapper(int &, int&);

int main()
{
    int N;
    takeN(N);

    auto arr = new int[N];

    takeArrayData(arr, N);
    printData(arr, N);
    arraySorting(arr, 0, N);
    printData(arr, N);

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
    int central = round((first_element + last_element) / 2);
    int pivot = arr[central]; // taking the mid element
    int i = first_element, j = last_element; // just some short names

    do{
        // swapping numbers
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i <= j) { swapper(arr[i], arr[j]); i++; j--; };

    } while(i <= j); // when i and j crosses together then stop

    // left sublist sorting
    if(first_element < j) arraySorting(arr, first_element, j);
    // righ sub-list sorting
    if(i < last_element) arraySorting(arr, i, last_element);
}

void swapper(int &a , int& b)
{
    int aux = b;
    b = a;
    a = aux;
}
