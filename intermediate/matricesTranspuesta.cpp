#include <iostream>

using namespace std;

int main(){
	// calculo de transpuesta
	int filas, columnas;
	cout << "Las filas de tu matriz: " << endl, cin >> filas;
	cout << "Las columnas de tu matriz: " << endl, cin >> columnas;

	int matriz[filas][columnas];
	int matrizTranspuesta[columnas][filas];

	// pidiendo los valores de la matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << "matriz[" << i << "][" << j << "]: ", cin >> matriz[i][j];
	// algoritmo para obtener la transpuesta de la matriz
	for (int i = 0;i < columnas;i++) for (int j = 0;j < filas;j++) matrizTranspuesta[i][j] =  matriz[j][i];
	//imprimiendo matrices
	cout << "La matriz es: " << endl;
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << matriz[i][j], (j == (columnas - 1)) ? cout << endl : cout << " ";
	cout << "La matriz transpuesta es: " << endl;
	for (int i = 0;i < columnas;i++) for (int j = 0;j < filas;j++) cout << matrizTranspuesta[i][j], (j == (filas - 1)) ? cout << endl : cout << " ";
	return 0;
}
