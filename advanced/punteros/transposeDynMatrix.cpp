#include <iostream>

using namespace std;

void requestLength();
void createMatrix();
void requestData();
void transpose();
void deleteMatrix();
void showTranspose(int **, int, int);

int **pmatrix;
int **newMatrix;

int rows, columns;

int main()
{
	// MATRIZ TRANPUESTA DE UNA MATRIZ DINAMICA
	requestLength();
	createMatrix();
	requestData();
	transpose();
	showTranspose(newMatrix, rows, columns);
	deleteMatrix();
	return 0;
}

void requestLength()
{
	cout << "====Matri<====" << endl;
	cout << "Ingresar el número de filas: ", cin >> rows;
	cout << "Ingresar el número de columnas: ", cin >> columns;
	cout << endl;
}

void createMatrix()
{
	// puntero de la matriz
	pmatrix = new int*[rows];
	// asignando punteros a cada fila
	for(int i = 0;i < rows;i++) pmatrix[i] = new int[columns];

	// la matriz para guardar la transpuesta
	newMatrix = new int*[rows];
	for(int i = 0;i < rows;i++) newMatrix[i] = new int[columns];
}

void requestData()
{
	for(int i = 0;i < rows;i++) for(int j = 0;j< columns;j++)
			cout << "matrix[" << i << "][" << j << "]: ", cin >> *(*(pmatrix+i)+j);
	cout << endl;
}

void transpose()
{
	for(int i = 0;i < rows;i++) for(int j = 0;j< columns;j++)
				*(*(newMatrix+i)+j) = *(*(pmatrix+j)+i);
}

void showTranspose(int **m, int rows, int columns)
{
	for(int i = 0;i < rows;i++) for(int j = 0;j < columns;j++)
			cout << *(*(m+i)+j), (j == (columns-1)) ? cout << "\n" : cout << " ";
	cout << endl;
}

void deleteMatrix()
{
	// borrando primero los punteros de las filas
	for(int i = 0;i < rows;i++) delete[] pmatrix[i];
	// borrando el puntero principal
	delete[] pmatrix;

	// borrando la transpuesta
	for(int i = 0;i < rows;i++) delete[] newMatrix[i];
	delete[] newMatrix;
}
