#include <iostream>

using namespace std;

void vectorDataRequest();
void oddsVector(int vector[], int N);
void showVector(int vector[], int N);

int vector[100], N;

int main(int argc, char** argv)
{
	vectorDataRequest();
	showVector(vector, N);
	oddsVector(vector, N);

	return 0;
}

void vectorDataRequest()
{
	cout << "Ingrese la longitud de su vector: ", cin >> N;
	for(int i = 0;i<N;i++) cout << "vector[" << i << "]: ", cin >> vector[i];
	cout << endl;
}

void oddsVector(int vector[], int N)
{
	int oddsCounter = 0;
	for(int i = 0;i<N;i++) if(vector[i] % 2 != 0) oddsCounter++;

	int odds[oddsCounter];
	int ob = 0;
	for (int i = 0;i<N;i++) if(vector[i] % 2 != 0) odds[ob] = vector[i], ob++;

	cout << "======VECTOR DE IMPARES=======" << endl;
	// imprimiendo
	for(int i = 0;i < oddsCounter;i++) cout << odds[i] << " ";
	cout << endl;
}

void showVector(int vector[], int N)
{
	cout << "=========VECTOR========" << endl;
	for(int i = 0;i<N;i++) cout << vector[i] << " ";
	cout << endl;
}
