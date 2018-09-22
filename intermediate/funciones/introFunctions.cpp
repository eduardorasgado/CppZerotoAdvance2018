#include <iostream>

using namespace std;

// Prototipo de la funcion
int findMax(int a, int b);

int main()
{
	// introduccion a las funciones
	int x, y;
	cout << "Primer número: ", cin >> x;
	cout << "Segundo número: ", cin >> y;

	cout << "Los números son: " << x << " y " << y << endl;

	// llamando a la funcion
	int result = findMax(x, y);
	cout << "El mayor es: " << result << endl;
	return 0;
}

// Definicion de la funcion
int findMax(int a, int b)
{
	int major = (a > b) ? a : b;
	return major;
}
