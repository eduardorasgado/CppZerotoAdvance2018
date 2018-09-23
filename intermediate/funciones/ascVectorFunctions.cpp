#include <iostream>

using namespace std;

void dataRequest();
void upChecker(int vector[], int N);

// variables globales
int vector[100], N;

int main(int argc, char** argv)
{
	//
	dataRequest();
	upChecker(vector, N);

	return 0;
}

void dataRequest()
{
	cout << "Ingrese la longitud del vector: ", cin >> N;
	for(int i = 0;i < N;i++) cout << "vector[" << i <<"]: ", cin >> vector[i];
	cout << endl;
}

void upChecker(int vector[], int N)
{
	bool upward = true;
	for(int i = 0;i < N;i++) if (i > 0) upward = (vector[i] > vector[i-1]) ? upward : false;

	(upward == 1) ? cout <<"El vector es ascendente" : cout << "NO es ascendente.";
	cout << endl;
}
