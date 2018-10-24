/*
Introduction to c++11 and c++14 core features.
Deducing TYpes:

*/
#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename T>
T equationOne(const T&);

template <typename T>
void manipulateNewValue(T& value);

int main()
{
	std::srand(std::time(NULL));
	// Introducing deducing types
	auto value = 234235.55133;
	// passing the value as a reference
	auto new_value = equationOne(value);
	manipulateNewValue(new_value);
	return 0;
}

template <typename T>
T equationOne(const T& value)
{
	// here we manipulate the value through reference
	auto number1 = rand() % 10;
	auto number = number1 * value;
	return number;
}

template <typename T>
void manipulateNewValue(T& value)
{
	// do somthing with the received value
	std::cout << "The value is: " << value << std::endl;
}