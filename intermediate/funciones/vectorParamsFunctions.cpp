/*
PASO DE PARAMETROS TIPO VECTOR

Parametros de la funcion:

	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo);

Llamada a la funcion:
	nombreDeFuncion(nombreArreglo, tamañoArreglo);
*/
#include <iostream>

using namespace std;

void sqrtVector(int vect[], int N);
void showVector(int vect[], int N);

int main(int argc, char** argv)
{
	// cuadrados de los elementos de un vector
	const int TAM = 5;
	int vect[5] = {1,2,3,4,5};

	showVector(vect, TAM);

	sqrtVector(vect, TAM);

	showVector(vect, TAM);

	return 0;
}

void sqrtVector(int vect[], int N)
{
	for(int i = 0;i < N; i++) vect[i] *= vect[i];
}

void showVector(int vect[], int N)
{	cout << "[ ";
	for(int i = 0;i < N;i++) cout << vect[i] << " "; cout << "]" << endl;
}
