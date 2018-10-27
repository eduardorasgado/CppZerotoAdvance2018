/*
 * C11 FEATURES: DELETE KEYWORD
 * */
#include <iostream>

class Dog
{
    private:
        int age;
    public:
        Dog(int age) { }
};

class Cat
{
    private:
        int age;
    public:
        Cat(int age) { } // everithing common here
        Cat(double) = delete; //
        Cat& operator=(const Cat&) = delete; // as a result if this case is presented it
        // will generate a compiler time error
};

int main()
{
    //
    Dog a(2); // it works
    Dog b(3.0); // 3.0 is converted from double to int
    a = b; // compiler generated asignment operator
    // sometimes we want other result doing this = operator

    Cat xx(2);
    // Cat yy(3.0);  // error, because we are declaring to delete in case of double in the class cat
    //xx = yy; // error, because of the delete in custom operation =
    std::cout << "Delete keyword lesson" << std::endl;
    return 0;
}