/*
 * C11 Features: OVERRIDE AND ASSERT
 * */
#include <iostream>

// 0VERRIDE (FOR VIRTUAL FUNCTIONS)
// To avoid inadvertently create new function in derived classes
// C++03
class Dog
{
        virtual void A(int);
        virtual void B() const;
};

class yellowDog : public Dog
{
        // doing an iverride llike this in c03 style is possible
        // however...
        // if we forget or we get wrong the types in vitual function
        // in c++03 we could create a polymophism failure or wrong behavior
        virtual void A(float); // Created a new function
        virtual void B(); // created a new function
};

// c++11
class Cat
{
        virtual void A(int);
        virtual void B() const;
        void C();
};

class WhiteCat : public Cat
{
        // with override keyword we create protection to or classes
        virtual void A(float) override; // error: no function to override
        virtual void B() override; // Error: no function to override
        void C() override; // Error, no function to override(in this case this function is not a virtual function)
};

int main()
{
    // STATIC ASSERT -------------------
    // runtime assert
    //assert( myPointer != NULL );

    // Compile time assert (C++11)
    //static_assert(sizeof(int) == 4);

    return 0;
}