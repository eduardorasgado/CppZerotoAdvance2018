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
void manipulateNewValue(T&& value);

template <typename T>
void handleFunc2(T value);

void changingArray(int[]);

void changingArrayPointer(int*);

int main()
{
	std::srand(std::time(NULL));
	// Introducing deducing types
	auto value = 234235.55133;
	// passing the value as a reference
	auto new_value = equationOne(value);
	manipulateNewValue(new_value);

	// ptr is const pointer to const
	const char* const ptr = "Fun with pointers";
	// pass arg of type char * const
	// the pointer itself is passed by value
	// because this functiono receives values
	// pssed by values
	handleFunc2(ptr);

	// Array arguments
	const char cypher[] = "Red$ew75vPBqAV4z";
	// constant pointer to array of characters
	const char * ptrToCypher = cypher;
	handleFunc2(ptrToCypher);

	int myArrayInt[] = {1,2,3,4,5,6,7,8,9};
	//passing by value
	changingArray(myArrayInt);
	// psasing by pointer
	changingArrayPointer(myArrayInt);
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

// here we see a universal reference
template <typename T>
void manipulateNewValue(T&& value)
{
	// do somthing with the received value
	std::cout << "The value is: " << value << std::endl;
}

// passing by value
template <typename T>
void handleFunc2(T value)
{
	std::cout << value << std::endl;
	// lets try to changing the value to show it cant
	// be changing instead
	//value = (value*value) / (value*value*value)
	// it will show an error instead
}

void changingArray(int myArray[])
{
	// do something
	int length = sizeof(&myArray);
	std::cout << "Length is this: " << length << std::endl;
	for(int i = 0;i <length;++i)
		std::cout << myArray[i] << " ";
	std::cout << std::endl;
}
// function above is the same as function here bellow
void changingArrayPointer(int *myArray)
{
	// do something
	int length = sizeof(&myArray);
	for(int i = 0;i <length;++i) std::cout << myArray[i] << " ";
	std::cout << std::endl;
}