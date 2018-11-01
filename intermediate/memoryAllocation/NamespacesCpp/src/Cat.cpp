//
#include <iostream>
#include "Cat.h"

Cat::Cat(std::string name, int age)
{
    // Cat constructor
    this->name = name;
    this->age = age;
}
Cat::~Cat()
{
    // Cat Destructor
}

void Cat::speak()
{
    // speaking
    std::cout << "Meowww!" << std::endl;
}