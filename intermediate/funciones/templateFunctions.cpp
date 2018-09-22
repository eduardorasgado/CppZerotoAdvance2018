#include <iostream>

using namespace std;

//prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main()
{
	// plantillas de funciones
	// sacar el valor absoluto de un numero
	// Las plantillas de funciones no sayudan a generar un tipo de dato general
	// nos sirve cuando no sabemos el tipo de dato que se va a ingresar

	float x = -5.6;
	int y = -2;
	double z = 131.4332;

	cout << "El valor es: " << x << endl;
	cout << "El valor es: " << y << endl;
	cout << "El valor es: " << z << endl;

	mostrarAbs(x);
	mostrarAbs(y);
	mostrarAbs(z);

	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero)
{
	numero = (numero < 0) ? numero * -1 : numero;
	cout << "El valor absoluto del numero es: " << numero << endl;
}
