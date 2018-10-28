#include <iostream>
#include <cstdlib>

class Holiday
{
    private:
        std::string name;
        const int day;
        const int month;
    public:
        Holiday(std::string name, const int day, const int month)
        : name{name}, day{day}, month{month}{}
        Holiday() = default; // force the compiler
};
// User defined types
struct Date
{
    // attributes(fields)
    // all attributes in a struct are public
    int day,
        month,
        year;
};

void insertingValues(Date*);

int main() {
    // structures
    struct Date d1{12, 9,2018};
    // now assign the memory address to a pointer
    struct Date *pd1 = &d1;

    std::cout << pd1->year << std::endl;

    // creating a dynamically allocated structure object and assign the values manually
    Date *d2 = new Date();
    insertingValues(d2);
    std::cout << "Dia: " << d2->day << std::endl;
    return 0;
}

void insertingValues(Date* d)
{
    //
    std::cout << "Inserte dia: ", std::cin >> d->day;
    std::cout << "Inserte mes: ", std::cin >> d->month;
    std::cout << "Inserte año: ", std::cin >> d->year;
}