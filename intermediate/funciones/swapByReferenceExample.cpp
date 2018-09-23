#include <iostream>

using namespace std;

void swapper(int&, int&);
void showValues(int&, int&);

int main(int argc, char** argv)
{
	// intercambio de dos variables por referencia
	int num1 = 10, num2 = 25;
	showValues(num1, num2);

	cout << "intercambio..." << '\n' << endl;
	swapper(num1, num2);

	showValues(num1, num2);
	return 0;
}

void swapper(int& x, int& y)
{
	//swapping by reference
	int aux = y;
	y = x;
	x = aux;
}

void showValues(int& num1, int& num2)
{
	cout << "El numero 1 es: " << num1 << endl;
	cout << "El numero 2 es: " << num2 << endl;
}
