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

// for smart point using
void createAndDestruct(std::string&);
//  to create an object copied inside a function
void objectCopy(Animal&);

int main()
{
    // create an object statically
    Animal cat1;
    cat1.setName("Botones");
    cat1.speak();

    std::cout << "-------------------------" << std::endl;
    //create an object dinalically
    Animal *pCat = new Animal();
    // the way to use a dynamically allocated instance method
    (*pCat).setName("Benito");
    // but there is a better an even more elegant way to do this
    pCat->speak();

    // a pointer has same size as a long type: 8 bytes
    std::cout << "Size of pointer: " << sizeof(pCat) << std::endl;

    std::cout << "-------------------------" << std::endl;

    // create an object with a smart point
    std::string catName;
    createAndDestruct(catName);

    //copying an object inside a function
    objectCopy(cat1);

    // deallocating memory explicitly
    delete pCat; // lets delete Benito from memory

    return 0;
}

void createAndDestruct(std::string&)
{
    //creating an object using a smart point
    auto kitty = std::make_shared<Animal>();
    kitty->setName("Agretusuki");
    std::cout << "smart pointer destroys the object safely." << std::endl;
}

//  to create an object copied inside a function
void objectCopy(Animal& otherCat)
{
    //
    std::cout << "Creating colitas..." << std::endl;
    //Animal colitas(otherCat);
    auto colitas = std::make_shared<Animal>(otherCat);
    std::cout << "Colitas was created through smart pointer" << std::endl;

    colitas->speak();
    colitas->setName("Colitas");
    colitas->speak();

}