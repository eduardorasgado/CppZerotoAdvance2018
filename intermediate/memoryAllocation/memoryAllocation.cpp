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
        void speak() const
        { (this->name != " ") ?
            std::cout << "Hi my name is " << this->name << std::endl
            : std::cout << "No name is setted yet" << std::endl; }
};


int main() {
    // creating an animal in the heap
    auto *bigotes = new Animal();

    bigotes->speak();
    bigotes->setName("Bigotes");
    bigotes->speak();

    delete bigotes;
    //-----------------------------------
    // we can use new even with primitive types
    int *pInt = new int;
    delete pInt;

    // Creating an array of objects with new
    Animal *pAnimals = new Animal[10];

    // iterating over the Animal array dynamically created
    // and calling their methods
    char l = 'a';
    for (int i = 0; i < 10; ++i) {
        // assigning names: a, b, c, d ...
        (pAnimals+i)->setName(std::string(&l));
        l++;
    }
    for (int j = 0; j < 10; ++j) {
        (pAnimals+j)->speak();
    }

    // to deallocate an array of dynamically created objects
    // created using new, we should use brackets
    delete []pAnimals;

    return 0;
}
