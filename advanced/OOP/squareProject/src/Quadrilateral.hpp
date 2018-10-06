#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class Quadrilateral
{
	private:
		float side1;
		float side2;

	public:
		// CONSTRUCTOR 1
		Quadrilateral(float side1, float side2)
		{
			this->side1 = side1;
			this->side2 = side2;
		}
		Quadrilateral(float side) // CONSTRUCTOR 2
		{
			this->side1 = this->side2 = side;
		}

		float getPerimeter();
		float getArea();
};

#endif