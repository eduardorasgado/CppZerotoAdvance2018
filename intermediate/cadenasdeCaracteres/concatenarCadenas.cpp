#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cad1[] = "Esto es una ";
	char cad2[] = "cadena de caracteres";

	// concatenando la cadena
	char cad3[30];
	strcpy(cad3, cad1); // copiando la cadena 1 en la vacia
	strcat(cad3, cad2); // cadena3 donde agregar, cadena2 es la que se va a agregar
	cout << "La cadena 1 es: " << cad1 << endl;
	cout << "La cadena 2 es: "<< cad2 << endl;
	cout << "La cadena resultante es: " << cad3 << endl;
	return 0;
}
