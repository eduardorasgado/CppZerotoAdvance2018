#include <iostream>

using namespace std;

int main(){
	int filas, columnas;
	// peticion al usuario
	cout << "De cuantas columnas será tu matriz: \n", cin >> columnas;
	cout << "De cuantas filas será tu matriz: " << endl, cin >> filas;
	// declaramos el tamano de la matriz
	int matriz[filas][columnas];

	// hacemos un ciclo para pedir los datos
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++)  cout << "matriz[" << i << "]" << "[" << j << "]: ", cin >> matriz[i][j];
	// imprimimos la matriz obtenida
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << "matriz" << i << ", " << j << ": " << matriz[i][j] << endl;
	// imprimirlo como matriz
	cout << "[";
	for (int i = 0;i < filas; i++) for (int j = 0; j < columnas;j++) (j == (columnas - 1)) ? cout << matriz[i][j] << endl : cout << matriz[i][j] << " ";
	cout << "]" << endl;
	return 0;
}
