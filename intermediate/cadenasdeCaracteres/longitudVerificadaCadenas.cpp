#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char frase[50];
	cout << "Escriba una cadena de caracteres: ";
	// toma la informacionde usuario
	cin.getline(frase, 50, '\n');
	// si la cadena supera los 10 caracteres entonces se imprime
	(strlen(frase) >10) ? cout << frase << endl : cout << strlen(frase) << endl;

	return 0;
}
