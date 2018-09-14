#include <iterator>
#include <iostream>

using namespace std;

int main(){
	// determinar simetria de una matriz
	// matriz simetrica:
	// es cuadrada n == m y es igual a su transpuesta
	int matriz[3][3] = {{8, 1, 3}, {1, 7, 4}, {3, 4, 9}};
	//int matriz[3][4] = {{8, 1, 3, 4}, {1, 7, 4, 5}, {3, 4, 9, 6}};
	bool size = false, transposeEqual = false;
	// algoritmo
	int filas, columnas;

	// obteniendo filas y columnas
	filas = end(matriz) - begin(matriz);
	columnas = end(matriz[0]) - begin(matriz[0]);
	// comprobando size
	size = (filas == columnas) ? true : false;

	// calculando transpuesta
	try { for (int i = 0;i < columnas;i++) for (int j = 0;j < filas;j++) transposeEqual = (matriz[i][j] == matriz[j][i]) ? true : false; }
	catch(int error) { cout << "ERROR: Desbordamiento \n"; }
	// si se cumplen ambas afirmaciones
	(size && transposeEqual) ? cout << "La matriz es simétrica" << endl : cout << "La matriz no es simetrica" << endl;

	return 0;
}
