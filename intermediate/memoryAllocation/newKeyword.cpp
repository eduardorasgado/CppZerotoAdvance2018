#include <iostream>
#include <memory>

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
        ~Animal() { std::cout << "Object Destructed" << std::endl; } // Destructor

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

    //create an object dinalically


    // create an object with a smart point
    std::string catName;
    createAndDestruct(catName);

    //copying an object inside a function
    objectCopy(cat1);

    return 0;
}

void createAndDestruct(std::string&)
{
    //creating an object using a smart point
    auto kitty = std::make_shared<Animal>();

    std::cout << "smart pointer destroys the object safely." << std::endl;
}

//  to create an object copied inside a function
void objectCopy(Animal& otherCat)
{
    //
    std::cout << "Creating colitas..." << std::endl;
    Animal colitas(otherCat);

}