#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	// Algoritmo de ordenamiento por insercion
	//O(n^2)
	// Es ineficiente para arreglos mayores a 50 datos

	int numeros[] = {10,5,3,9,2,8,4,7,6,1};
	int length = (sizeof(numeros)/sizeof(*numeros));

	//algoritmo
	//for(int i = 0;i<length;i++) for(int j = 0;j < length;j++) (j != 0) ?
	//								((numeros[j-1] > numeros[j]) ? swap())
	//							: (void(0));

	cout << "Length: " << length << endl;
	cout << "El arreglo es: " << endl; for(int &numero : numeros) cout << numero << endl;
	int aux, pos;
	for(int i=0;i < length;i++){
		aux = numeros[i];
		pos = i;
		while((pos > 0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	// imprimiendo el arreglo ordenado
	cout << "El arreglo ordenado es: " << endl; for(int &numero : numeros) cout << numero << endl;
	return 0;
}
