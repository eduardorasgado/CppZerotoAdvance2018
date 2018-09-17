#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	// Algoritmo de ordenamiento por insercion
	//O(n^2)
	// Es ineficiente para arreglos mayores a 50 datos

	int numeros[] = {10,5,3,9,2,8,4,7,6,1,19,13,14,12,17,18,16,15,11,20};
	int length = (sizeof(numeros)/sizeof(*numeros));

	cout << "Length: " << length << endl;
	cout << "El arreglo es: " << endl; for(int &numero : numeros) cout << numero << endl;

	// algoritmo de la clase

	//int aux, pos;
	//for(int i=0;i < length;i++){
	//	aux = numeros[i];
	//	pos = i;
	//	while((pos > 0) && (numeros[pos-1] > aux)){
	//		numeros[pos] = numeros[pos-1];
	//		pos--;
	//	}
	//	numeros[pos] = aux;
	//}

	//algoritmo minimizado

	//for(int i = 0;i < length;i++){
	//	for(int j = i;j > 0;j--){
	//		if(numeros[j-1] > numeros[j]){
	//			swap(numeros[j-1],numeros[j]);
	//		}
	//	}
	//}

	// algoritmo ofuscado
	for(int i = 0;i < length;i++) for(int j = i;j > 0;j--) (numeros[j-1] > numeros[j]) ? swap(numeros[j-1],numeros[j]) : (void(0));

	// imprimiendo el arreglo ordenado
	cout << "El arreglo ordenado es: " << endl; for(int &numero : numeros) cout << numero << endl;
	return 0;
}
