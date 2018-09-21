#include <iostream>

using namespace std;

int main(){
	int numeros[] = {2,4,6,2,1,5}; // buscaremos 4 aqui
	int pos, dato = 4;
	bool found = false;
	for(int i = 0;i < (sizeof(numeros)/sizeof(*numeros));i++) found = (numeros[i] == dato) ? true : found, pos = (numeros[i] == dato) ? i : pos;
	cout << "Se encontró " << dato << " en el arreglo: " << found << endl;
	(found == 1) ? cout << "Esta en el indice: " << pos << endl : cout << "";
	return 0;
}
