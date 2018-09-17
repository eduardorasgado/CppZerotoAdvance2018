#include <iostream>
// #include <algorithm>
#include <cmath>

using namespace std;

void intercambio(int &x, int &y){
	// implementacion breve de swap
	int aux = x;
	x = y;
	y = aux;
}

void ordenamientoShell(int numeros[], int length){
	// algoritmo
        // sorted: flag para saber si se ordenaron todos en le intervalo o no
        int gap = length/2, sorted = 0;
        // el salto minimo debe ser uno
        while(gap >= 1){
                // iterando en intervalos
                for(int j = 0; j < (length-gap);j++) (numeros[j] > numeros[j+gap]) ? intercambio(numeros[j], numeros[j+gap]), sorted++ : 0;
                // en caso de aun no estar ordenado cada grupo gap sigue siendo igual
                gap = (sorted == 0) ? floor(gap/2) : gap, sorted = 0;
        }

	// imprimimos en orden asc, el vector resultante
        cout << "El resultado es: " << endl; for (int i = 0;i < length;i++) cout << numeros[i] << endl;
}

int main(){
	// Algoritmo de ordenamiento Shell Sort
	//  O(n log^2 n) 
	// Pasos
	//Se divide la lista en n/2, considerando un incremento entre los dos elementos
	// Se clasifica cada grupo por seárado comparando las parejas de elementos y si no estan ordenados se intercambian
	// Se divide ahora la lista en la mitad de grupos n/4 cpn un salto entre los elementos tambien de la mitad
	//   y tambien se separa cada grupo por separado
	// Asi sucesivamente se sigue dividiendo la lista en la mitad de grupos que en el recorrido anterior con un salto
	// 	decreciente en la mitad que el salto anterior y luego clasificando cada grupo por separado
	// El algoritmo termina cuando el tamaño del salto es 1

	int numeros[] = {20,15,13,9,12,8,4,7,6,1,19,3,14,2,17,18,16,5,11,10};

	int length = sizeof(numeros)/sizeof(*numeros);

	cout << "*******ALGORITMO DE ORDENAMIENTO: SHELL SORT*********" << endl;
	cout << "El arreglo es el siguiente" << endl; for (int &numero : numeros) cout << numero << endl;
	cout << "-------------------------------" << endl;

	ordenamientoShell(numeros, length);

	return 0;
}
