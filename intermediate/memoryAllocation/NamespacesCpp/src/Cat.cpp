// if libraries were imported in Cat.h
// it is not necessary ti import them here
#include "Cat.h"

namespace marsCat
{
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
}