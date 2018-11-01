/*
 * Arrays andn functions
 * */
#include <iostream>

void showArray1(const int, std::string texts[]);
void showArray2(int&, std::string*);

// () parenthesis need to be there
// this is recomended when want to use sizeof inside a function
template <std::size_t N>
void showArray3(std::string (&texts)[N]);

// returning length of an array
template <typename T, std::size_t N>
constexpr std::size_t returnLength(T(&)[N]) noexcept
{
    return N;
}

int main()
{
    std::string text[] = {"text1", "text2", "text3", "text3", "hola"};

    //std::cout << sizeof(text)/ sizeof(std::string) << std::endl;
    int N = sizeof(text)/ sizeof(*text);

    showArray1(N, text);
    std::cout << "------------" << std::endl;
    showArray2(N, text);
    std::cout << "------------" << std::endl;
    showArray3(text);
    std::cout << "------------" << std::endl;
    // getting length of a string
    auto nElements = returnLength(text);
    std::cout << nElements << std::endl;
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
void showArray2(int& N, std::string *texts)
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
template <std::size_t N>
void showArray3(std::string (&texts)[N])
{
    std::cout << "show 3" << std::endl;
    // N can be used inside of the function
    for (int i = 0; i < N; ++i) {
        // even (&texts)[N] can be trated like this
        std::cout << *(texts+i) << std::endl;
    }
}