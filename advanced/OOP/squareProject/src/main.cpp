#include <iostream>
#include "Quadrilateral.hpp"

void requestSides(float&, float&);
void showPerimeter(Quadrilateral *);
void showArea(Quadrilateral *);

int main(void)
{
	Quadrilateral* c1;
	float side1, side2;
	requestSides(side1, side2);

	if(side1==side2) c1 = new Quadrilateral(side1);
	else c1 = new Quadrilateral(side1, side2);

	showPerimeter(c1);
	showArea(c1);

	return 0;
}

void requestSides(float& s1, float& s2)
{
	std::cout << "SIDE 1: ", std::cin >> s1;
	std::cout << "SIDE 2: ", std::cin >> s2;
	std::cout << std::endl;
}

void showPerimeter(Quadrilateral *c1)
{
	std::cout << "PERIMETER: " << c1->getPerimeter() << std::endl;
}

void showArea(Quadrilateral *c1)
{
	std::cout << "AREA: " << c1->getArea() << std::endl;
}