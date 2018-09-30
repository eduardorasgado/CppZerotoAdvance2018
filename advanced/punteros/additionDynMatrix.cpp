#include <iostream>

using namespace std;

// PROTOTIPOS
void requestFirst();
void requestSecond();
int givemeRows();
int givemeColumns();
void requestBoth();
void createMatrices();
void assignmentDataToMatrix(int **, int, int, int);
void assignDataBoth();
void deleteMemory();
void addition(int **, int**, int, int, int, int);
void deleteMemoryAllocation(int **,int);

//GLOBALES
int **pmatrix1;
int rows1, columns1;

int **pmatrix2;
int rows2, columns2;

//========================
int main(void)
{
	requestBoth();
	createMatrices();
	assignDataBoth();
	addition(pmatrix1, pmatrix2, rows1, rows2, columns1, columns2);
	
	deleteMemory();

	return 0;
}
//=======================
void requestBoth()
{
	requestFirst();
	requestSecond();
}


void requestFirst()
{
	cout << "====Matriz 1====" << endl;
	rows1 = givemeRows();
	columns1 = givemeColumns();
	cout << endl;
}

void requestSecond()
{
	cout << "====Matriz 2====" << endl;
	rows2 = givemeRows();
	columns2 = givemeColumns();
	cout << endl;
}

int givemeRows()
{
	int r;
	cout << "Filas: ", cin >> r;
	return r;
}

int givemeColumns()
{
	int c;
	cout << "Columnas: ", cin >> c;
	return c;
}

void createMatrices()
{
	// Creando las matrices dinamicas, reservando memoria int*[] y **[]
	pmatrix1 = new int*[rows1];
	for(int i = 0;i<rows1;i++) pmatrix1[i] = new int[columns1];

	pmatrix2 = new int*[rows2];
	for(int i = 0;i<rows2;i++) pmatrix2[i] = new int[columns2];
}

void assignDataBoth()
{
	assignmentDataToMatrix(pmatrix1, rows1, columns1, 1);
	assignmentDataToMatrix(pmatrix2, rows2, columns2, 2);
}

void assignmentDataToMatrix(int **m, int rows, int columns, int id)
{
	for(int i = 0;i<rows;i++)
	{
		for(int j = 0;j < columns;j++)
		{
			cout << "matriz" << id << "[" << i << "][" << j << "]: ",
			cin >> *(*(m+i)+j);
		}
	}
	cout << endl;
}

void deleteMemory()
{
	deleteMemoryAllocation(pmatrix1, rows1);
	deleteMemoryAllocation(pmatrix2, rows2);
}

void addition(int **m1,int **m2, int rows1, int rows2, int columns1, int columns2)
{
	if(rows1 != rows2 || columns1 != columns2) 
					cout << "No se puede llevar esta operación, verifique n y m" << endl;
	else
		for(int i = 0;i<rows1;i++) for(int j = 0;j<columns1;j++) 
						cout << (*(*(m1+i)+j) + *(*(m2+i)+j)),
									(j == (columns1-1)) ? cout << "\n" : cout << " ";
	cout << endl;
}

void deleteMemoryAllocation(int **m, int r)
{
	// borrando los punteros de las filas
	for(int i = 0;i < r;i++) delete[] m[i];
	// borrando puntero principal
	delete[] m;
}