#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	// algoritmo inneficiente, pero didactico
	//para no mas de 50 datos
	// O(n^2)
	int numeros[] = {10,5,3,9,2,8,4,7,6,1,19,13,14,12,17,18,16,15,11,20};
	int length = sizeof(numeros)/sizeof(*numeros);
	cout << "La longitud del arreglo es: " << endl;
	cout << "El arreglo es: " << endl; for (int &numero : numeros) cout << numero << endl;

	// algoritmo
	for(int i = 0;i < length;i++) for(int j = i; j < length; j++) (numeros[i] > numeros[j]) ? swap(numeros[i], numeros[j]) : (void(0));

	// imprimimos el resultado
	cout << "Mi arreglo ahora es(asc): " << endl; for (int &numero : numeros) cout << numero << endl;
	return 0;
}
