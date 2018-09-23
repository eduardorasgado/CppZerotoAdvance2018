#include <iostream>
#include <cmath>

using namespace std;

void dataRequest();
void fractionGetter( float number);
void showResult();

// globals
float num, fraction;

int main(int argc, char** argv)
{
	dataRequest();
	fractionGetter(num);
	showResult();
	return 0;
}

void dataRequest()
{
	// pide los valores al user
	cout << "Ingrese su numero: ", cin >> num;
	cout << "El numero que introdujo es: " << num << endl;;
}

void fractionGetter(float number)
{
	// calcula el restante fraccionario
	int truncado = number;
	cout << "La parte entera es: " << truncado << endl;
	fraction = number - truncado;
}

void showResult()
{
	// muestra el resultado en la variable global fraction
	cout << "El restante fraccionario es: " << fraction <<endl;
}
