#include <iostream>
#include "Slave.h"

void printSomething(int&);

int main(void)
{
	Slave* s1 = new Slave("Bathub");
	s1->sayHi();
	std::cout << s1->getName() << std::endl;
	std::cout << s1->getNumber() << std::endl;

	int number = 8;
	printSomething(number);


	return 0;
}

void printSomething(int& number)
{
	std::cout << number * number << std::endl;
}