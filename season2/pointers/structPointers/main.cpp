#include <iostream>

struct Person
{
    char name[30];
    int age;
};

void changeName(struct Person*);

int main()
{
    struct Person persona1{"Eduardo", 15};
    std::cout << persona1.name << "\n";

    // pointer to struct
    struct Person *p_persona1 = &persona1;

    // accessing pointer attributes
    std::cout << p_persona1->age << "\n";

    changeName(p_persona1);

    std::cout << "New name is: " << (*p_persona1).name << "\n";
    return 0;
}

void changeName(struct Person *p)
{
    std::cout << "new name: ";
    std::cin.getline(p->name, 30, '\n');
}
