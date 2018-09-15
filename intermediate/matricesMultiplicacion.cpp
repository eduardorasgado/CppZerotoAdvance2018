#include <iterator>
#include <iostream>

using namespace std;

int main(){
	// int matriz1[4][3] = {{2,0,1}, {3,0,0}, {5,1,1}, {1,2,3}};
	int matriz1[3][3] = {{2,0,1}, {3,0,0}, {5,1,1}};
	int matriz2[3][3] = {{1,0,1}, {1,2,1}, {1,1,0}};
	int matrizResultado[3][3];
	// multiplicando matrices 3x3
	// confirmamos si se trata de una operacion valida, se comparan filas y columnas
	bool dimConfirm = (((end(matriz1)- begin(matriz1)) == (end(matriz2) -begin(matriz2))) &&
				((end(matriz1[0]) - begin(matriz1[0])) == (end(matriz2[0]) - begin(matriz2[0])))) ? true : false;
	(dimConfirm) ? cout << "las dimensiones son correctas: " << endl : cout << "No se permite esta multiplicación" << endl;
	if (!dimConfirm) return 0;
	// basado en la formula C(ij) = C(ij) + Σ(P, k=0) A(i,k) * B(k,j) . En este caso j = 3
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3; j++)
		matrizResultado[i][j] = (matriz1[i][0]* matriz2[0][j])+(matriz1[i][1]*matriz2[1][j])+(matriz1[i][2]*matriz2[2][j]);
	//imprimir resultado y matrices 1 y 2
	cout << "Matriz 1: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3; j++) cout << matriz1[i][j], (j == 2) ? cout << endl : cout << " ";
	cout << "Matriz 2: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3; j++) cout << matriz2[i][j], (j == 2) ? cout << endl : cout << " ";
	cout << "Matriz resultante: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3; j++) cout << matrizResultado[i][j], (j == 2) ? cout << endl : cout << " ";
	return 0;
}
