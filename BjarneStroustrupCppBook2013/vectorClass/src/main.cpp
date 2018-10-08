#include <iostream>
#include "Vector.hpp"

int main(void)
{
	int N;
	std::cout << "N: ";
	std::cin >> N; 
	Vector v(N);
	std::cout << v.read_and_sum(N);
	std::cout << std::endl;
	return 0;
}