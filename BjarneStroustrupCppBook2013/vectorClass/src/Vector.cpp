#include <iostream>
#include "Vector.hpp"

double Vector::read_and_sum(int s)
{
	Vector v(s);
	for(int i = 0;i!=v.size;i++)
		std::cout << "v[" << i <<"]", std::cin >> v[i];

	double sum = 0;
	for(int i=0;i!=v.size;i++)
		sum+=v[i];

	return sum;
}