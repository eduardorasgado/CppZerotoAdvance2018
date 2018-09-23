#include <iostream>

using namespace std;

void symmetry(int matrix[][4], int, int);
void showMatrix(int matrix[][4], int, int);

int main(int argc, char** argv)
{
	const int NROWS = 4;
	const int NCOLUMNS = 4;
	int matrix[NROWS][NCOLUMNS] = {{1,0,1,0},{0,1,0,0},{1,0,1,0},{0,0,0,1}};

	showMatrix(matrix, NROWS, NCOLUMNS);

	symmetry(matrix, NROWS, NCOLUMNS);

	return 0;
}

void symmetry(int matrix[][4], int nrows, int ncolumns)
{
	int isSquare = 0;
	if(nrows == ncolumns) isSquare = 1;

	int isSymmetrical = 1;
	for(int i = 0;i< nrows;i++)
                for(int j = 0;j<ncolumns;j++)
			isSymmetrical = (matrix[i][j] == matrix[j][i]) ? isSymmetrical : 0;
	((isSymmetrical == 1) && (isSquare == 1)) ? cout << "La matriz es simetrica" :
				cout << "La matriz no es simetrica";
	cout << endl;
}

void showMatrix(int matrix[][4], int nrows, int ncolumns)
{
	for(int i = 0;i< nrows;i++)
                for(int j = 0;j<ncolumns;j++)
                        (j == (ncolumns-1)) ? cout << matrix[i][j] << "\n" :
                                                        cout << matrix[i][j] << " ";
        cout << endl;
}
