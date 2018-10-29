#include <iostream>

class Animal
{
    private:
        // if you know a name or somthing wont neve change
        // you should want to add a const keyword
        std::string name;
    public:
        // two inline methods
        void setName(std::string name)
        {
            this->name = name;
        }
        // reducing the risk of changing something
        // the idea of const functions is not to allow them to modify the object on which they are called.
        // We get compiler error if we add a line like "this->name = "lili";"
        // https://www.geeksforgeeks.org/const-member-functions-c/
        void speak() const { std::cout << "My name is " << this->name << std::endl; }
};

int main()
{
    // constant does not change
    const double PI = 3.141592;
    std::cout << PI << std::endl;

    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();

    // pointer mutabillity

    // creating a pointer to value memory address
    int value = 8;
    int *pValue = &value;

    std::cout << *pValue << std::endl;

    int number = 11;
    // we can reasign the memory address out pointer will be pointing
    pValue = &number;
    std::cout << *pValue << std::endl;

    // changin the number value through a pointer
    // we need to access to the value the pointer is refearing to be able to changeit
    *pValue = 12;
    // now we can see number changed
    std::cout << number << std::endl;

    // POINTER TO A CONSTANT INT
    // we cannot change value inside the memory address is pointing
    // but we can change the memory address it is pointing
    const int *pValue2 = &value;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(with pointer): " << *pValue2 << std::endl;
    // changing the value of value variable
    value = 5;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(with pointer): " << *pValue2 << std::endl;
    // changing the value through the const pointer
    // it will throw an error because now the pointer is read only
    //*pValue2 = 100;
    // but we can change the memory location the pointer to a constant int is pointing
    pValue2 = &number;
    std::cout << "value: " << number << std::endl;
    std::cout << "value(pointer to constant int): " << *pValue2 << std::endl;

    // CONSTANT POINTER TO AN INT
    // that means we cannot reassign this pointer to other memory address
    // but we can change the value inside the memory address it is pointing
    int * const pVal3 = &value;
    // so we cannot do this
    //pVal3 = &number;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(constant pointer to an int): " << *pVal3 << std::endl;
    // but we can change the value the const pointer is refering
    *pVal3 = 100;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(constant pointer to an int): " << *pVal3 << std::endl;


    // CONSTANT POINTER TO INT THAT IS CONSTANT
    // It is like a pointer strictly constant
    // NO value inside can be changed
    // NO memory address it is pointing can be changed
    const int * const pInmutable = &value;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(constant pointer to int that is constant): " << *pInmutable << std::endl;
    // now we cannot do neither these actions:
    //*pInmutable = 120;
    //pInmutable = &number;
    return 0;
}