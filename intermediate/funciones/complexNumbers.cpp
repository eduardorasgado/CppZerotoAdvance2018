#include <iostream>

using namespace std;

struct Complex
{
	float real,
	      imaginaria;
}
z1,
z2
;

void dataRequest();
Complex addition(Complex, Complex);
void showComplex(Complex);

int main(int argc, char** argv)
{
	// suma de numeros complejos
	// z1 = 5-3i , z2 = -4 + 2i
	// z1 + z2 = (5-3i)+(-4+2i)
	// 5-3i -4+2i
	// 1-i

	dataRequest();
	Complex zResult = addition(z1, z2);
	showComplex(zResult);
	return 0;
}

void dataRequest()
{
	cout << "Digite los datos para el primer numero complejo" << endl;
	cout << "Parte real: ", cin >> z1.real;
	cout << "Parte Imaginaria: ", cin >> z1.imaginaria;

	cout << "Digite los datos para el segundo numero complejo" << endl;
        cout << "Parte real: ", cin >> z2.real;
	cout << "Parte Imaginaria: ", cin >> z2.imaginaria;
}

Complex addition(Complex z1, Complex z2)
{
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;

	return z1;
}

void showComplex(Complex zResult)
{
	// para comprobar que la parte imaginaria no imprima "+ 1i"
	// aunque esto permite la impresion de "+ -1i"
	int r = zResult.imaginaria;
	int r2  = (char) r;
	cout << "El resultado es: " << zResult.real << " + "; (r!=1) ? cout << r2 : cout << "";cout<< "i" << endl;
}
