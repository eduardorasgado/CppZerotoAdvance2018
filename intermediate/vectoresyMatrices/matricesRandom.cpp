#include <iostream>

using namespace std;

int main(){
	int filas, columnas;
	cout << "Numero de filas de tu matriz: " << endl, cin >> filas;
	cout << "Número de columnas de tu matriz: " << endl, cin >> columnas;
	int matrizRandom[filas][columnas], matrizRandom2[filas][columnas];
	srand(time(NULL));

	//metiendole datos aleatorios a la matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) matrizRandom[i][j] = 1 + rand() % 100;
	//copiando esos valores a otra matriz
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) matrizRandom2[i][j] = matrizRandom[i][j];
	//imprimiendo la matriz 2
	for (int i = 0;i < filas;i++) for (int j = 0;j < columnas;j++) (j == 0) ? cout << "|" : cout << "",
			cout << matrizRandom2[i][j], (j == (columnas - 1)) ? cout << "|"  << endl : cout << " ";
	return 0;
}
