#include <iostream>

using namespace std;

void newValues(int&, int&);
void showNewValues(int&, int&);

int main(int argc, char** argv)
{
	int num1, num2;
	cout << "Digite dos numeros: ", cin >> num1 >> num2;

	newValues(num1, num2);
	showNewValues(num1, num2);

	return 0;
}

// indicando direcciones de memoria de dichos valores
// paso de parametros por referencia
void newValues(int& xnum, int& ynum)
{
	cout << "Los valores son: " << xnum << " y " << ynum << endl;
	xnum += 5;
	ynum += 5;
}

void showNewValues(int& x, int& y)
{
	cout << "Los nuevos valores son: " << x << " y " << y << endl;
}
