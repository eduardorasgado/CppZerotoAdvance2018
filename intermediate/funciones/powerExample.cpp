#include <iostream>
#include <cmath>

using namespace std;

void dataRequest();
void funpot(int num, int potencia);

// variables globales
int x, pot;

int main(int argc, char** argv)
{
	dataRequest();

	// llamada a la funcion
	funpot(x, pot);

	return 0;
}

void dataRequest()
{
	cout << "Introduce tu numero: ", cin >> x;
        cout << "Introduce la potencia: ", cin >> pot;
}

void funpot(int num, int potencia)
{
	long result = pow(num, potencia);
	cout << "El resultado es: " << result << endl;
}
