#include <iostream>

using namespace std;

template <class GTYPE>
GTYPE maximo(GTYPE val1, GTYPE val2, GTYPE val3);

int main(int argc, char** argv)
{
	// max value
	float value1 = 5.5;
	float value2 = 3.2;
	float value3 = 4.67;

	// llamando a la funcion
	cout << "El valor maximo es: " << maximo(value1, value2, value3) << endl;

	return 0;
}

template <class GTYPE>
GTYPE maximo(GTYPE val1, GTYPE val2, GTYPE val3)
{
	GTYPE maximoVal;
	GTYPE values[] = {val1, val2, val3};
	for(int i = 0;i < 3;i++) maximoVal = (values[i] > maximoVal) ? values[i] : maximoVal;

	return maximoVal;
}
