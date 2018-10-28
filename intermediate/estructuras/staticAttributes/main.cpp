#include <iostream>
#include <cstring>
#include <cstdlib>

struct Date
{
    int day,
        month,
        year;
};

struct Book
{
    int ID;
    std::string name;
    std::string Author;
    // nested structure Date
    Date Published;
    // static attribute integer type
    // it means all variables type Book will share Count attribute
    // We need to reserve some space for this static
    static int Count;
};

// allocating the static in Book
// it is a must to get static variables work
int Book::Count = 0;

int main() {
    //
    //Book b1, b2, b3;
    auto b1 = new Book();
    auto b2 = new Book();
    auto b3 = new Book();

    b1->ID = 0; b1->name = "The cracker"; b1->Author = "B.F.F.";
    b1->Count = 1;
    std::cout << "Book 1 count: " << b1->Count << std::endl;
    std::cout << "Book 2 count: " << b2->Count << std::endl;

    b2->Count = 2;
    std::cout << "Book 1 count: " << b1->Count << std::endl;
    std::cout << "Book 2 count: " << b2->Count << std::endl;

    b1->Published.day = 12;
    b1->Published.month = 5;
    b1->Published.year = 2018;

    std::cout << "Book" << " " << b1->name << " was published at: ";
    std::cout << b1->Published.month << "/" <<b1->Published.year;
    std::cout << std::endl;


    delete b1;
    delete b2;
    delete b3;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}