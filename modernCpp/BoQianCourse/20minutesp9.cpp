/*
 * C++11 Features: CONSTEXPR
 * */
#include <iostream>

int A() { return 3; }
// C11
constexpr int B() { return 3; } // Forces the computation to happen at compile time

// write faster program with constexpr
// if i know that cube function will always work with constant values
// as a result a decalration like this: int y = cubed(1789); will not
// consume any time at runtime execution
constexpr int cube(int x) { return x * x * x; }

constexpr int square(int x) { return x * x; }

//every sentence that uses this function will be executed at runtime
template <typename T, std::size_t N>
constexpr size_t returnSize(T(&)[N]) noexcept  //the function f() does not throw
{
    return N;
}

int main()
{
    //

    //int arr[6]; // OK
    int arr[A()+4]; // OK

    //C++11
    int arr2[B()+3];

    std::cout << sizeof(arr)/ sizeof(*arr) << std::endl;
    std::cout << sizeof(arr2)/ sizeof(*arr2) << std::endl;

    // for constexp explanation
    int arrayExample[3000];
    // now array  compiled hs same values that array example
    // but caution: it is for constant values
    // this array was created at compiled time, supossing its size will never change
    // so it wont consume execusion time for creating it
    int arrayCompiled[returnSize(arrayExample)];
    // size of the array bellow
    std::cout << sizeof(arrayCompiled)/ sizeof(*arrayCompiled) << std::endl;
    // now lets introduce values in it

    int helper  = 0;
    // same as arrayCompiled creation, this will be filled at compile time
    for(auto &v : arrayCompiled)
    {
        v = square(helper); // for each, with changing value possibility
        helper++;
    }

    for(auto v : arrayCompiled) std::cout << v << " "; // foreach, read only

    std::cout << std::endl;

    int y = cube(1789); // computed at compile time
    std::cout << "\n" << y << std::endl;
    return 0;
}