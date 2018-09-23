#include <iostream>

using namespace std;

void signChanger(int vector[], int N);
void vectorDataRequest();
void showVector(int vector[], int N);

int vector[100], N;

int main(int argc, char** argv)
{
	vectorDataRequest();
	showVector(vector, N);
	signChanger(vector, N);
	showVector(vector, N);
	return 0;
}

void vectorDataRequest()
{
	// peticion de los datos al usuario
	cout << "Cual es la longitud del vector: ", cin >> N;
	for(int i = 0;i<N;i++) cout << "vector[" << i << "]: ", cin >> vector[i];
	cout << endl;
}

void signChanger(int vector[], int N)
{
	for(int i = 0;i<N;i++) vector[i] = -vector[i];
}

void showVector(int vector[], int N)
{
	for(int i = 0;i<N;i++) cout << vector[i] << " ";
	cout << "\n" << endl;
}

