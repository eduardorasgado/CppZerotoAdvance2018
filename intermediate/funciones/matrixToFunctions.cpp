#include <iostream>

using namespace std;

void squareMatrix(int matriz[][3], int, int);
void showMatrix(int matriz[][3], int, int);

int main(int argc, char** argv)
{
	const int NROWS = 2;
	const int NCOLUMNS = 3;

	int matrix[NROWS][NCOLUMNS] =  {{1,2,3},{4,5,6}};

	showMatrix(matrix, NROWS, NCOLUMNS);

	// paso de parametros tipo matriz a funcion
	squareMatrix(matrix, NROWS, NCOLUMNS);

	showMatrix(matrix, NROWS, NCOLUMNS);

	return 0;
}

void squareMatrix(int matriz[][3], int nfilas, int ncolumnas)
{
	for(int i = 0;i< nfilas;i++)
		for(int j = 0;j<ncolumnas;j++) matriz[i][j] = matriz[i][j] * matriz[i][j];
}
void showMatrix(int matriz[][3], int nfilas,int ncolumnas)
{
	for(int i = 0;i< nfilas;i++)
                for(int j = 0;j<ncolumnas;j++) 
			(j == (ncolumnas-1)) ? cout << matriz[i][j] << "\n" :
							cout << matriz[i][j] << " ";
	cout << endl;
}
