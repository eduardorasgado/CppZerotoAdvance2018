#include <iostream>

using namespace std;

int suma(int vector1[], int N);
void dataRequest();
void showVector();

int N, vector[100];

int main(int argc, char** argv)
{
	// pidiendo los datos al usuario
	dataRequest();
	showVector();
	int addition = suma(vector, N);
	cout << "La suma de todos los numeros del vector es: " << addition << endl;

	return 0;
}

int suma(int vector1[], int N)
{
	int addition = 0;
	for(int i = 0;i < N;i++)  addition += vector[i];
	return addition;
}

void dataRequest()
{
	cout << "De que tamaño es su vector: ", cin >> N;
	for(int i = 0;i < N;i++) cout << "vector[" << i << "]: ", cin >> vector[i];
	cout << endl;
}

void showVector()
{
	for(int i = 0;i < N;i++) cout << "vector[" << i << "]: " << vector[i] << endl;
	cout << endl;
}
