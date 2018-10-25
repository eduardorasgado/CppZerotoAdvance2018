/*
* AUTO DEDUCTION
*
*/
#include <iostream>

template <typename T>
void func_for_x(T);

// conceptual function for cx's type
template <typename T>
void func_for_cx(const T);

// conceptual template for deduct rx's type
template <typename T>
void func_for_rx(const T&);

int main()
{
	//
	auto x = 14.5;
	// here we are sjust copying the value of x
	const auto cx = x;
	// here we have a refernece to x
	const auto& rx = x;
	
	//functionOne(x);
	std::cout << "FUnciton passed by value: " << std::endl;
	func_for_x(x);
	func_for_cx(x);
	func_for_rx(x);
	return 0;
}

template <typename T>
void func_for_x(T param)
{
	// here we are returning our param
	std::cout << param << std::endl;
}

template <typename T>
void func_for_cx(const T param)
{
	//
	std::cout << param << std::endl;
}

template <typename T>
void func_for_rx(const T& param)
{
	//
	std::cout << param << std::endl;
}