/*
 * C++11 FEATURES: NEW STRING LITERALS, LAMBDA FUNCTIONS
 * */
#include <iostream>
#include <vector>

// lambda function
auto f = [](int x, int y) { return x+y; };

// in main i passed a lambda function as parameter
template <typename func>
void filter(func f, std::vector<int> arr)
{
    for(auto i : arr)
        if(f(i)) std::cout << i << " ";
}

int main()
{
    // C03
    char a[] = "string";

    //C++11
    char aa[] = u8"string"; // to define an UTF-8 string
    char16_t b[] = u"string"; // to define an UTF-16 string
    char32_t c[] = U"string"; // to define an UTF-32 string
    std::string raw_string = R"(string)"; // to define a raw string
    std::cout << raw_string << std::endl;

    // C++11 Lmabda functions
    std::cout << f(6,3) << std::endl;

    // multiplication using a lambda function: like an anonymous function
    std::cout << [](int x, int y) { return x*y; }(6, 3) << std::endl;

    std::vector<int> v{1,2,3,4,5,6};
    // passing a lambda function to a funtion as parameter
    filter([](int value){ return (value%2 == 0); }, v);
    std::cout << std::endl;

    return 0;
}