// definir una matrz 3x3 y  escribir un ciclo para la matriz principal
#include <iostream>

using namespace std;

int main(){
	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	cout << "La matriz es: " << endl;
	for (int i = 0; i < 3;i++) for (int j = 0;j < 3;j++) cout << "matriz[" << i  << "][" << j << "]: " << matriz[i][j] << endl;
	cout << " La diagonal es: " << endl;
	for (int i = 0;i < 3;i++) for (int j = 0;j < 3;j++) (i == j) ? cout << matriz[i][j] << " " : cout << ""; cout << endl;

	return 0;
}
