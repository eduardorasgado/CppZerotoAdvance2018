#include <iostream>

// the value enters here and it takes a reference and not a copy of the value
void changeSomething(double& value)
{
    value = 123.4;
}

int main() {
    // References
    int value1 = 8;
    // diferent use of address operator without a pointer
    // then here value 2 is a reference of value 1
    // basically value 2 is another name for value1(alias)
    int &value2 = value1;
    value2 = 10;
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;

    double value = 4.321;
    // passing the value by reference
    changeSomething(value);
    std::cout << value;

    return 0;
}