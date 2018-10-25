#include <iostream>
#include <array>
#include <algorithm>

// We can deduct the size of an array
template <typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept
{
	return N;
}

template <typename T>
void showSize(T&);

int main()
{
	// declaring a simple array
	int testArray[] = {1,2,3,4,5,6,7,8};
	// using the function in a normal way
	auto testSize = arraySize(testArray);
	showSize(testSize);

	// using the function to create another array
	int mappedValues[arraySize(testArray)];
	// introducing values to new array
	for(int i = 0;i < arraySize(testArray);++i) mappedValues[i] = i;
	for(int i = 0;i< arraySize(testArray);++i) std::cout << mappedValues[i] << " ";
	std::cout << std::endl;

	// creating mapped values in a modern way
	// Using the arraySize() function
	std::array<int, arraySize(testArray)> mMappedValues;
	// adding values to the new array [10, 10, 10 ...]
	std::for_each(mMappedValues.begin(), mMappedValues.end(), [](int& n){n = ((n*0)+10);});
	// printing the values inside the array using a pointer
	for(int &v : mMappedValues) std::cout << v << std::endl;

	return 0;
}

template <typename T>
void showSize(T& size)
{
	std::cout << "La longitud es: " << size << std::endl;
}