/*
 * C++11 UNIFORM INITIALIZATION
 * */
#include <iostream>
#include <memory>
#include <initializer_list>

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

    return 0;
}