#include <iostream>

class Animal
{
    private:
        std::string name;
    public:
        // common constructor
        Animal() { std::cout << "Animal created" << std::endl; }

        // copy constructor/ specifying what should be copied
        Animal(const Animal& other): name{other.name}
        {
            std::cout << "Animal created by copying." << std::endl;
            // specifying what exactly should be copied
            // we can do it like this or even better by placing at function definition above
            //name = other.name;
        }

        void setName(std::string name) { this->name = name; }
        void speak() const { std::cout << "My name is: " << this->name << std::endl; }
};

int main()
{
    //
    Animal animal1;
    animal1.setName("Freedy");

    // creating a copy of an instance already created
    Animal animal2 = animal1;

    // if we call this speak inmediatelly after created the copy we see a blank in name
    // until we specifies what attributes have to be copied for the animal copy
    // inside copy constructor
    animal2.speak();
    // now actually it is an independant change
    animal2.setName("Bob");

    std::cout << "Animals talking: " << std::endl;
    animal1.speak();
    animal2.speak();

    // another way to make the copy of the object
    // using the copy constructor in a directly way
    Animal animal3(animal1);
    animal3.speak();
    return 0;
}