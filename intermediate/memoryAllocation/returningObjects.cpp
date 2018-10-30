#include <iostream>
#include <memory>
#include <cstdlib>

class Animal
{
    private:
        std::string name;

    public:
        // common constructor
        Animal() { std::cout << "Animal created" << std::endl; }
        // copy constructor
        Animal(const Animal& other)
                : name{other.name}
        {
            std::cout << "Animal created by copying" << std::endl;
        }
        ~Animal() { std::cout << "Object Destructed: " << this->name << std::endl; } // Destructor

        void setName(std::string name) { this->name = name; }
        void speak() const
        { std::cout << "My name is " << this->name << std::endl; }
};

// created a function returns an object/ inefficient way
Animal createAnimal();

// function returning an object/ efficient way
Animal* createAnimalEfficient();

int main()
{
    std::cout << "-------------------------" << std::endl;
    //create an object dinalically
    // new is allocating memory on the heap which is bigger than the heap
    Animal *pCat = new Animal();
    // the way to use a dynamically allocated instance method
    (*pCat).setName("Benito");
    // but there is a better an even more elegant way to do this
    pCat->speak();

    delete pCat; // lets delete Benito from memory

    // creating an animal inside a function(not recommended)
    Animal frog = createAnimal();
    frog.speak();

    // creating an animal throughout a function
    auto *pFrog = createAnimalEfficient();
    pFrog->speak();

    // the object created inside the function now can be
    // safely deallocated, because it is pointed by pFrog
    delete pFrog;

    return 0;
}

// function that returns and object
Animal createAnimal()
{
     /*
      * this way to return an object is quit inefficient
      *since were creating here the object, copying the object to
      *the object instance in main function and destructing the object created
      *here
      * */
    Animal a;
    a.setName("Betty");
    // returning a new object
    return a;
}

// An efficient way
Animal* createAnimalEfficient()
{
    /*
     * This is a good way because were not doing
     * object creation twice, we are returning an animal
     * by pointer, so we are passing the actual memory
     * location of the object created inside this function,
     * then in main this is passed as a pointer, it should be treated as it is.
     * */
    Animal *pAnimal = new Animal();
    pAnimal->setName("EfficientBetty");
    return pAnimal;
}