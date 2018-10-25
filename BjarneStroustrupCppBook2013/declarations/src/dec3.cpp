#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>

template <typename T>
constexpr T square(T value)
{
	return value*value;
}

int main()
{
	//
	const int dmv = 15;
	//int var = 13;

	// it works but square need to return a constexpt
	// this will be evaluated by the compiler
	constexpr double max1 = 1.4*square(dmv);
	std::cout << max1 << std::endl;

	// This will give you an error
	//constexpr double max2 = 1.4*square(var);
	//std::cout << max2 << std::endl;

	// this will be just a¿evaluated at runtime
	const double max3 = 1.4*square(dmv);
	std::cout << max3 << std::endl;

	// printing from a temp list
	for(auto &x : {1,2,3,4,5,6,7,8}) std::cout << x << " ";
	std::cout << std::endl;

	// creating a STL array
	std::array<int, 8> myArray1;
	// adding elements to the array using an int as iterator
	int i = 0;
	for(auto &x : myArray1) x = ++i;

	// printing the array
	std::ostream_iterator<int> salida(std::cout, " ");
	std::copy(myArray1.begin(), myArray1.end(), salida);

	std::cout << std::endl;

	return 0;
}