/*
*MATRICES DINAMICAS
*EJEMPLO: Rellenar una matriz de nxm y mostrar su contenido
* **puntero_matriz -> *puntero_fila -> [int][int]
*                     *puntero_fila -> [int][int]
*                     *puntero_fila -> [int][int]
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void requestData();
void createDynMatrix();
void assignmentToMatrix();
void showMatrix(int **, int,int);

//puntero para matriz: puntero de punteros
int **puntero_matriz;
int rows, columns;

int main(void)
{
	requestData();
	createDynMatrix();
	assignmentToMatrix();
	showMatrix(puntero_matriz, rows, columns);
	//liberar la memoria utilizada
	// para cada inicio de fila -> **
	for(int i =0;i < rows;i++) delete[] puntero_matriz[i];
	// el puntero inicial -> *
	delete[] puntero_matriz;
	
	return 0;
}

void requestData()
{
	cout << "Digite el numero de filas de su matriz: ", cin >> rows;
	cout << "Digite el numero de columnas de su matriz: ", cin >> columns;
	cout << endl;
}

void createDynMatrix()
{
	// GENERANDO MATRI< DINAMICA
	puntero_matriz = new int*[rows]; // reservando memoria para filas
	// reservando memoria para columnas
	for(int i = 0;i <rows;i++) puntero_matriz[i] = new int[columns]; 
}	

void assignmentToMatrix()
{
	for(int i = 0;i < rows;i++) for(int j = 0;j < columns;j++)
						cout << "matriz[" << i << "][" << j << "]: ",
											cin >> *(*(puntero_matriz+i)+j);
}

void showMatrix(int **pm, int r, int c)
{
	for(int i = 0;i < r;i++) for(int j = 0;j < c;j++)
						// pm[i][j]
						cout << *(*(pm+i)+j), 
							(j == (c-1)) ? cout << "\n" : cout << " ";
}