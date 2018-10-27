/*
 * C++11, 14 FEATURES
 * */

#include <iostream>

void foo(int i) { std::cout << "foo_int" << std::endl; }
void foo(char* pc) { std::cout << "foo_char*" << std::endl; }

int main()
{
    // NULL POINTER
    // nullptr

    // C++03 -> NULL
    //foo(NULL); // Ambiguity compiling time error
                // it is because when i call foo, which if both foo does this foo(NULL) calls?
    // C++11
    foo(nullptr); // call foo(char*) ->works better cuz it does not get that ambiguity
                    // it is a pointer to NULL, but however it is still a pointer

    /*
     * ENUM CLASS =======================================
     */
    // plain c++ 03 enum

    // An enumeration is a user-defined data type that consists of integral constants.
    // To define an enumeration, keyword enum is used
    // values:    0         1       2        3
    //enum season { spring, summer, autumn, winter };

    // thien the name of enumeration is season, and spring, summer and winter are values of type season
    // By default, spring is 0, summer is 1 and so on.
    enum season2 {
        spring = 0,
        summer = 4,
        autumn = 8,
        winter = 12
    };

    season2 fall = autumn;
    std::cout << "Which value does autumn is: " << fall << std::endl;

    //
    //    enum apple { green_a, red_a };
    //    enum orange { big_o, small_o };
    //
    //    apple a = green_a;
    //    orange o = big_o;

    //    if (a == o)
    //        std::cout << "green apple and big orange are not the same(keys)" << std::endl;
    //
    //    else
    //        std::cout << "green apple and big orange are the same(keys)" << std::endl;

    // C++11 enum class
    enum class apple { green, red };
    enum class orange { big, small };
    apple a = apple::green;
    orange o = orange::big;

    // soo these operators will throw a compiler fail
    //    if (a == o)
    //        std::cout << "green apple and big orange are not the same(keys)" << std::endl;
    //
    //    else
    //        std::cout << "green apple and big orange are the same(keys)" << std::endl;


    return 0;
}