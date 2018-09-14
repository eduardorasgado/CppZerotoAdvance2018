#include <iostream>

using namespace std;

int main() {
	// para que se sumen las matrices deben tener mismo numero de comunas y filas
	int matrix1[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
	int matrix2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int matrixSuma[3][3];
	//calculando la suma de los vectores
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3;j++) matrixSuma[i][j] = matrix1[i][j] + matrix2[i][j];
	// imprimiendo las matrices
	cout << "Matriz 1: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3;j++) cout << matrix1[i][j], (j == 2) ? cout << endl : cout << " ";
	cout << "Matriz 2:" << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3;j++) cout << matrix1[i][j], (j == 2) ? cout << endl : cout << " ";
	cout << "Matris suma: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3;j++) cout << matrixSuma[i][j], (j == 2) ? cout << endl : cout << " ";
	return 0;
}
