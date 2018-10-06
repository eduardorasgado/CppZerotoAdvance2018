#include "Quadrilateral.hpp"

float Quadrilateral::getPerimeter()
{
	float perimeter = 2*(this->side1 + this->side2);
	return perimeter;
}

float Quadrilateral::getArea()
{
	float area = (this->side1 * this->side2);
	return area;
}