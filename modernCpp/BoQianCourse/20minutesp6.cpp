/*
 * C++11 FEATURES: FINAL KEYWORD
 * */
#include <iostream>
#include <cstdlib>

// final keyword
class Dog final
        // no class can be derived from dog
{
    private:
        int x;
    public:
        Dog(int x): x{x}{}
};

//class whiteDog : public Dog
//{
//        // cannot do this because of final on dog
//};

class Cat
{
        virtual void meow() final; // No class can override this method in class cat
};

int main()
{
    //
    auto *doggy = new Dog(5);
    std::cout << "doggy can barks!" << std::endl;
    delete doggy;
    return 0;
}