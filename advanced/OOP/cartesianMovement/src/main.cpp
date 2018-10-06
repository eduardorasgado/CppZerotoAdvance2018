#include <iostream>
#include "CartesianPlane.hpp"

void setPos(int&, int&);
int printMenu();
void getterxy(CartesianPlane*);

int main(void)
{
	CartesianPlane* point1;
	int x1, y1, option, steps;

	setPos(x1,y1);
	
	point1 = new CartesianPlane(x1, y1);
	
	getterxy(point1);

	do
	{
		option = printMenu();

		if(option >0 && option <=4)
		{
			std::cout << "\nhow many steps: ", std::cin >> steps;
		}
		else break;
		
		switch(option)
		{
			case 1:
				point1->moveUp(steps);
			break;
			case 2:
				point1->moveDown(steps);
			break;
			case 3:
				point1->moveRight(steps);
			break;
			case 4:
				point1->moveLeft(steps);
			break;
			default:
				std::cout << "Invalid, trya valid option\n";
		}
		getterxy(point1);
		
	} while(option <5);	

	return 0;
}

void setPos(int& x1, int& y1)
{
	std::cout << "===OBJECT POSITION===" << std::endl;
	std::cout << "x: ", std::cin >> x1;
	std::cout << "y: ", std::cin >> y1;
}

int printMenu()
{
	int op;
	std::cout << "\n===MENU===" << std::endl;
	std::cout << "1. Up" << std::endl;
	std::cout << "2. Down" << std::endl;
	std::cout << "3. Right" << std::endl;
	std::cout << "4. Left" << std::endl;
	std::cout << "5. Exit" << std::endl;
	std::cout << "tab your choice: ";
	std::cin >> op;
	std::cin.ignore();
	return op;
}

void getterxy(CartesianPlane* point1)
{
	std::cout << "===POSITION===" << std::endl;
	std::cout << "X: ";
	std::cout << point1->getX() << std::endl;
	std::cout << "Y: ";
	std::cout << point1->getY() << std::endl;
}