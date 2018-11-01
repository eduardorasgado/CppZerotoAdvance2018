/*
 * Arrays andn functions
 * */
#include <iostream>

// passing arrays not in a good manner
void showArray1(const int, std::string texts[]);
// passing arrays by pointers
void showArray2(const int&, std::string*);

// () parenthesis need to be there
// this is recomended when want to use sizeof inside a function
// passing arrays by reference
template <typename T, std::size_t N>
void showArray3(T (&texts)[N]);

// returning length of an array
template <typename T, std::size_t N>
constexpr std::size_t returnLength(T(&)[N]) noexcept
{
    return N;
}

// return an array using pointer
char *getArray(const int&);

template <typename T>
void handlingDynamicArray(const int&, T*);

// setting free a char created with new
// usually it s a common function seen in software
template <typename T>
void freeMemory(T *pMem)
{
    // deallocating the array
    delete[] pMem;
}

// Could declare global arrays  here but not recomended

int main()
{
    std::string text[] = {"text1", "text2", "text3", "text4", "hola"};

    //std::cout << sizeof(text)/ sizeof(std::string) << std::endl;
    int N = sizeof(text)/ sizeof(*text);

    showArray1(N, text);
    std::cout << "------------" << std::endl;
    showArray2(N, text);
    std::cout << "------------" << std::endl;
    showArray3(text);
    std::cout << "------------" << std::endl;
    // getting length of first array and creating another
    int nArray = returnLength(text);
    std::cout << "L: " << nArray << std::endl;
    // even when new is not used here we should deallocate the memory
    auto *myArray = getArray(nArray);

    // inserting values and showing those values in dynamic array
    handlingDynamicArray(nArray, myArray);

    std::cout << "\n------------" << std::endl;

    freeMemory(myArray);
}

// pasing an array by value
// const in parameters means this element cant be changed inside this function
void showArray1(const int elements, std::string texts[])
{
    // sizeof in a function passing an array by valued
    // it wil throw a warning
    //std::cout << sizeof(texts) << std::endl;

    for(int i = 0; i < elements; i++)
    {
        std::cout << texts[i] << std::endl;
    }
}

// passing as a pointer
void showArray2(const int& N, std::string *texts)
{
    // int N = sizeof(*texts);
    //std::cout << N << std::endl;

    for(int i = 0; i < N; i++)
    {
        std::cout << *(texts+i) << std::endl;
    }
}

// passing by reference
// and getting the size of the array using a size_t
template <typename T, std::size_t N>
void showArray3(T (&texts)[N])
{
    std::cout << "show 3" << std::endl;
    // N can be used inside of the function
    for (int i = 0; i < N; ++i) {
        // even (&texts)[N] can be trated like this
        std::cout << *(texts+i) << std::endl;
    }
}

// return array using a pointer
// in a proper way
char *getArray(const int& N)
{
    // Dont return pointers to local variables
    //std::string texts[] = {"one", "two", "three", "four"};
    //return texts;

    // a proper way to return an array from a function
    char *array = new char[N];
    return array;
}

template <typename T>
void handlingDynamicArray(const int& nArray, T*myArray)
{
    // inserting values into the array
    for (int i = 0; i < nArray; ++i) {
        *(myArray+i) = 'a'+i;
    }
    //showing the array
    for (int j = 0; j < nArray; ++j) {
        std::cout << *(myArray+j) << " ";
    }
}