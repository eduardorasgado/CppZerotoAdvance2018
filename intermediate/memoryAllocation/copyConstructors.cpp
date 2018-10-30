#include <iostream>
#include <vector>
#include <initializer_list>
#include <iterator>
#include <algorithm>

class Animal
{
    private:
        std::string name;
        int age;
        //
        std::vector<int> v;
    public:
        // common constructor
        Animal() { std::cout << "Animal created" << std::endl; }

        // copy constructor/ specifying what should be copied
        Animal(const Animal& other): name{other.name}, age{other.age}, v{other.v}
        {
            std::cout << "Animal created by copying." << std::endl;
            // specifying what exactly should be copied
            // we can do it like this or even better by placing at function definition above
            //name = other.name;
        }

        void setName(std::string name) { this->name = name; }
        void setAge(int age) { this->age = age; }
        void speak() const { std::cout << "My name is: " << this->name << " and I'm " << this->age << std::endl; }
        // including values to v using intializer:_list
        void setVector(const std::initializer_list<int>& vect)
        {
            // introducing each value passed in method call
            for(auto ve : vect)
            {
                // vector from STL
                this->v.push_back(ve);
            }
        }
        void showVector()
        {
            // showing to user the values inside the vector
            //for(auto ve : this->v) std::cout << ve << " ";
            std::ostream_iterator<int> salida(std::cout, " ");
            std::copy(this->v.begin(), this->v.end(), salida);
            std::cout << std::endl;
        }
};

int main()
{
    //
    Animal animal1;
    animal1.setName("Freedy");
    animal1.setAge(5);
    animal1.setVector({1,2,3,4,5,6,7,8,9});
    animal1.showVector();

    // creating a copy of an instance already created
    Animal animal2 = animal1;

    // if we call this speak inmediatelly after created the copy we see a blank in name
    // until we specifies what attributes have to be copied for the animal copy
    // inside copy constructor
    animal2.speak();
    // now actually it is an independant change
    animal2.setName("Bob");
    animal2.showVector();

    std::cout << "Animals talking: " << std::endl;
    animal1.speak();
    animal2.speak();

    // another way to make the copy of the object
    // using the copy constructor in a directly way
    Animal animal3(animal1);
    animal3.speak();
    animal3.showVector();
    return 0;
}