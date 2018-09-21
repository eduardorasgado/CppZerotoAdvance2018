#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	int inferior, superior, mitad, dato;
	bool found = false;

	superior = sizeof(numeros)/sizeof(*numeros);
	inferior = 0;

	dato = 14;
	while(inferior <= superior)
	{
		mitad = round((inferior + superior)/2);
		found = (numeros[mitad] == dato) ? true : found;
		if(numeros[mitad] == dato) break;
		if(numeros[mitad] > dato) superior = mitad-1;
		if(numeros[mitad] < dato) inferior = mitad+1;
	}

	(found == 1) ? cout << "El numero ha sido encontrado en el indice: " << mitad : cout << "Numero no encontrado";
	cout << endl;
	return 0;
}
