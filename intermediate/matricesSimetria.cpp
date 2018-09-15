#include <iterator>
#include <iostream>

using namespace std;

int main(){
	// determinar simetria de una matriz
	// matriz simetrica:
	// es cuadrada n == m y es igual a su transpuesta
	bool size = false, transposeEqual = false;

	int filas, columnas, elementosCalculados = 0, totalElementos;
	// obteniendo filas y columnas
	cout << "digite el numero de filas: ", cin >> filas;
	cout << "digite el numero de columnas: ", cin >> columnas;
	int matriz[filas][columnas];

	// insertando elementos en la matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << "ingrese matriz[" << i << "][" << j << "]: ", cin >> matriz[i][j];

	// algoritmo
	// obteniendo filas y columnas
	size = (filas == columnas) ? true : false;

	totalElementos = filas * columnas;

	// calculando transpuesta
	try { for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) elementosCalculados = (matriz[i][j] == matriz[j][i]) ? elementosCalculados + 1 : elementosCalculados; }
	catch(int error) { cout << "ERROR: Desbordamiento \n"; }
	transposeEqual = (totalElementos == elementosCalculados) ? true : false;

	// si se cumplen ambas afirmaciones
	(size && transposeEqual) ? cout << "La matriz es simétrica" << endl : cout << "La matriz no es simetrica" << endl;
	//imprimiendo la matriz
	cout << "La matriz es: " << endl;
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << matriz[i][j], (j == (columnas - 1)) ? cout << endl : cout << " ";
	return 0;
}
