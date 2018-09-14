#include <iostream>

using namespace std;

int main(){
	int matrizDos[2][2] = {{1,2},{3,4}};
	int other[2][2];
	for (int i =0;i < 2;i++) for (int j = 0;j < 2;j++) other[i][j] = matrizDos[i][j];
	for (int i =0;i < 2;i++) for (int j = 0;j < 2;j++) (j == 1) ? cout << other[i][j] << endl : cout << other[i][j] << " ";
	return 0;
}

