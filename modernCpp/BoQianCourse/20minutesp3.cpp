/*
 * C++11 UNIFORM INITIALIZATION, AUTO, FOREACH
 * */
#include <iostream>
#include <memory>
#include <initializer_list>
#include <vector>

// using initializer list in constructor
class Dog
{
    private:
        int age;
        std::string name;
    public:
        // int age; // thirth option
        Dog(int a, std::string name): age{a}, name{name}{} // second option or choice
        Dog(const std::initializer_list<int>& vect) // first option or choice
        {
            // taking the first element of our vector passed in object creation inside main
            this->age = *(vect.begin());
        }

        // setters and getters
        int getAge() { return this->age; }
        std::string getName() { return this->name; }

};

class Cat
{
    private:
        int age;
        std::string name;
    public:
        // C11 extended the scope of curly brace initialization
        Cat(int age, std::string name): age{age}, name{name}{}
        ~Cat() { } // destructor

        std::string getName()
        {
            return this->name;
        }

};

int main()
{
    // UNIFORM INITIALIZATION
    Dog unknown = {8}; // Aggregate Initialization(works with the initializer_list constructor
    Dog terry = {2, "Terry"}; // Aggregate Initialization
    std::cout << "terry age: " << terry.getAge() << std::endl;
    std::cout << "unknown age: " << unknown.getAge() << std::endl;

    // creating a smart pointer
    auto mambo = std::make_shared<Cat>(3, "Mambo");

    Cat chato = {6, "Chato"}; // C11 way

    // old way to create a class
    // Cat gloton(2, "Glotón");

    std::cout << chato.getName() << std::endl;
    std::cout << mambo->getName() << std::endl;

    // auto again
    auto a = 56;
    auto b = 9.56;
    auto c = a;
    auto d = 'a';

    std::cout << a << ", " << b << ", " << c << ", " << d << std::endl;

    // foreach =================================================
    //creating the vector
    std::vector<int> v = {1,2,3,4,5};
    // C++03
    for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) std::cout << *i << " ";
    std::cout << "\n";
    // C++11
    std::cout << "C11 foreach." << std::endl;
    for(auto i : v) // works on any class that has begin() and end()
        std::cout << i << " "; // read only access
    std::cout << "\n";

    std::cout << "changing the v values" << std::endl;
    for(auto &i : v) // with reference
        i++; // now we can access to i and it can be changed

    for(auto i : v) // lets show it again
        std::cout << i << " "; //
    std::cout << "\n";

    return 0;
}