#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void showList(int numeros[], int ultimo)
{
	for(int i = 0;i < ultimo;i++) cout << numeros[i] << " "; cout << endl;
}

void swapper(int &a,int &b )
{
	int aux = b;
	b = a;
	a = aux;
}

void quickSortAlgorithm(int numeros[], int primero, int ultimo)
{
	int central = round((primero + ultimo) / 2);
	int pivote = numeros[central];
	int i = primero, j = ultimo;
	do
	{
		// pasando menores y mayores de lado izquierdo y derecho del pivot
		while(numeros[i] < pivote) i++;
		while(numeros[j] > pivote) j--;
		if (i <= j) swapper(numeros[i], numeros[j]), i++, j--;
	} while(i <= j);  // cuando i y j se crucen, se acaba
	// Ordenar sublista izquierda
	if (primero < j) quickSortAlgorithm(numeros, primero, j);
	// Ordenar sublista derecha
	if (i < ultimo) quickSortAlgorithm(numeros, i, ultimo);
}

int main()
{
	// Algoritmo de ordenamiento: Quick sort
	// divide and conquer
	// O(nlog(n))
	// Pasos:
	// -Selecciona el elemento central de a[] como pivote
	// -Divide los elementos restantes en particiones izquierda y derecha, de modo que ningun elemento
	// de la izquierda tenga una clave mayor que el pivote y que ningun elemento a la derecha tenga
	// una clave mas pequenia que la del pivote
	// -Ordenar la particion izquierda utilizando quick sort recursivamente
	// Ordenar la particion derecha utilizando quick sort recursivamente
	// La solucion es particion izquierda seguida por el pivote y la particion derecha

	// El arreglo
	int numeros[] = {10,5,3,9,2,8,4,7,6,1,19,13,14,12,17,18,16,15,11,20,0};

	//ejecutando algoritmo
	int ultimo = sizeof(numeros)/sizeof(*numeros);
	// imprimir como se mira el arreglo sin ordenar
	showList(numeros, ultimo);
	quickSortAlgorithm(numeros, 0, ultimo);

	// lista ya ordenada
	showList(numeros, ultimo);
	return 0;
}
