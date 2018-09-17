#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	// algoritmo bubble sort de ordenamiento:
	// los numeros mas pequeños suban hacia las primeras pocisiones de mi arreglo
	// O(n^2)
	// ineficiente
	// usualmente solo para meros fines de aprendizaje
	// No se suele aplicar a la vida real

	// declarando el arreglo
	int numeros[] =  {10,3,2,7,6,9,8,1,5,4};
	// calculando la longitud de numeros
	int length =(sizeof(numeros)/sizeof(*numeros))-1;

	// algoritmo
	for(int i = 0;i < length;i++) for(int j = 0; j < length;j++) (numeros[j] > numeros[j+1]) ? swap(numeros[j],numeros[j+1]) : (void(0));

	// imprimiendo el resultado del ordenamiento
	for(int &numero : numeros) cout << numero << endl;

	return 0;
}
