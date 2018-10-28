#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>
#include <initializer_list>

template <class T>
class Holiday
{
    private:
        std::string name;
        int day;
        int month;
    public:
        Holiday(std::string name, int day, int month)
        : name{name}, day{day}, month{month}{}
        Holiday() = default; // force the compiler

        // setting the names pased in a vector form
        // const is kinda must
        void setNums(const std::initializer_list<T>& vect)
        {
            auto i = vect.begin();
            this->day = *i;
            i++;
            this->month = *i;
        }
        void setName(std::string n) { this->name = n; }

        int getDay() { return this->day; }
        int getMonth() { return this->month; }
        std::string getName() { return this->name; }
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

template <typename T>
void doingSomething(std::vector<T>*, std::string);

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

    // using class Holiday safely inside a function
    std::vector<int> v = {d2->day, d2->month};
    std::vector<int> *pv = &v;
    doingSomething(pv, "Christmas");

    delete d2;
    return 0;
}

void insertingValues(Date* d)
{
    //
    std::cout << "Inserte dia: ", std::cin >> d->day;
    std::cout << "Inserte mes: ", std::cin >> d->month;
    std::cout << "Inserte año: ", std::cin >> d->year;
}

template <typename T>
void doingSomething(std::vector<T>* v, std::string)
{
    // using a shared pointer
    // we are using the default constructor of holiday
    auto christmas = std::make_shared<Holiday<T>>();
    // so when this function finishes, we do not have to delete a pointer
    // because we are using a smart pointer
    christmas->setNums({v->at(0), v->at(1)});
    christmas->setName("Christmas");

    std::cout << "Holiday: " << christmas->getName() << ", day: " << christmas->getDay() << std::endl;

}