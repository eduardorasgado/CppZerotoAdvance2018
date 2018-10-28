#include <iostream>
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
    std::string author;
    // Date nested
    Date published;
    static int storage_counter;
};

// To be able to use static variable
int Book::storage_counter = 0;

int main()
{
    // Creating instances to be stored inside book
    Date d1 = {12, 14, 2016};
    Date d2{24, 12, 2017};
    // creating book object:dynamic and statically
    auto b1 = new Book();
    Book lotr = {5, "The Lord of the Rings", "Tolkien RR", d1};

    //
    Book b2 = {4, "some book 2", "some guy", d2};
    auto *pb2 = &b2;
    //-------------------------
    // Array of structs
    Book books[100];
    for(int i = 0;i < 100;++i) books[i].ID = 100+i;
    for(int i = 0;i < 100;++i) std::cout << books[i].ID << " ";
    delete b1;
    return 0;
}