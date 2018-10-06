#include "Slave.h"
#include <iostream>

int Slave::number = 0;

int Slave::getNumber()
{
	return number;
}

std::string Slave::getName()
{
	return this->name;
}

void Slave::sayHi()
{
	std::cout << "Hi!" << std::endl;
}

void Slave::saySomething()
{
	std::cout << "STATIC METHOD CALLED..." << std::endl;
}