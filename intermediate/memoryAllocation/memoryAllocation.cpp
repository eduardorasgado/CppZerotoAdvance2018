#include <iostream>
#include <cstdlib>

class Animal
{
    private:
        std::string name = " ";
        static int count;

    public:
        // common constructor
        Animal() { std::cout << "Animal created" << std::endl; count++; }

        // copy constructor
        Animal(const Animal& other): name{other.name}
        { std::cout << "Animal created by copying." << std::endl; count++; }

        ~Animal() { std::cout << this->name << " has been deallocated(passed away)." << std::endl; } // Destructor

        // setters and getters
        void setName(std::string name) { this->name = name; }

        // methods
        void speak() const
        { (this->name != " ") ?
            std::cout << "Hi my name is " << this->name << std::endl
            : std::cout << "No name is setted yet" << std::endl;
        }

        static int getCount()
        {
            return count;
        }
};

// initialize the static attribute of Animal class
int Animal::count = 0;

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

    // array of chars created with new
    // remember it is good when you will created a high amount of objects
    // and you want to prevent a stack overflow
    // since new allocates objects in the heap
    char *pMem = new char[1000];
    delete []pMem;

    // --------------------------------
    // Creating an array of objects with new

    // using appripiate type for the length of new array
    std::size_t NANIMALS = 10;

    Animal *pAnimals = new Animal[NANIMALS];

    // using static attribute and method
    std::cout << "size of pAnimals array: " << Animal::getCount() << std::endl;

    // iterating over the Animal array dynamically created
    // and calling their methods
    char l = 'a';
    for (int i = 0; i < NANIMALS; ++i) {
        // assigning names: a, b, c, d ...
        // get the control of the output with flush
        std::cout << l << " " << std::flush;
        // casting the character to string ans passing char by reference
        // to name the actual animal of the iteration
        (pAnimals+i)->setName(std::string(&l));
        l++;
    }
    std::cout << "\n";

    for (int j = 0; j < NANIMALS; ++j) {
        (pAnimals+j)->speak();
    }
    std::cout << "\n";

    // to deallocate an array of dynamically created objects
    // created using new, we should use brackets
    delete []pAnimals;

    return 0;
}
