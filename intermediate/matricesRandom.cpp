#include <iostream>

using namespace std;

int main(){
	int filas, columnas;
	cout << "Numero de filas de tu matriz: " << endl, cin >> filas;
	cout << "Número de columnas de tu matriz: " << endl, cin >> columnas;
	int matrizRandom[filas][columnas];

	//metiendole datos aleatorios a la matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) matrizRandom[i][j] = rand() % 100;
	//imprimiendo la matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) cout << matrizRandom[i][j], (j == (columnas - 1)) ? cout << endl : cout << " ";
	return 0;
}
