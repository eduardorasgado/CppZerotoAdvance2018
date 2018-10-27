/*
 * C++11 FEATURES: DEFAULT KEYWORD
 * */
#include <iostream>

class Dog
{
    private:
        int age;

    public:
        Dog(int age) {}
};

class Cat
{
    private:
        int age;

    public:
        Cat(int age);
        Cat() = default;  // Force compiler to generate the default constructor
};
int main()
{
    //  Error: compiler will not generate the default constructor
    //Dog d1;

    Cat c1;
    std::cout << "Code executed" << std::endl;
    return 0;
}