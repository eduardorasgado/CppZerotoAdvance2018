#include <iostream>
#include <cstdlib>

class Animal
{
    private:
        std::string name = " ";

    public:
        // common constructor
        Animal() { std::cout << "Animal created" << std::endl; }

        // copy constructor
        Animal(const Animal& other): name{other.name}
        { std::cout << "Animal created by copying." << std::endl; }

        ~Animal() { std::cout << this->name << " has been deallocated(passed away)." << std::endl; } // Destructor

        // setters and getters
        void setName(std::string name) { this->name = name; }

        // methods
        void speak()
        { (this->name != " ") ?
            std::cout << "Hi my name is " << this->name << std::endl
            : std::cout << "No name is setted yet" << std::endl; }
};


int main()
{
    // creating an animal in the heap
    auto *bigotes = new Animal();

    bigotes->speak();
    bigotes->setName("Bigotes");
    bigotes->speak();

    //-----------------------------------

    delete bigotes;
    return 0;
}
