#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cadena1[50];
	char cadena2[50];
	cout << "Ingrese la cadena 1: ";
	cin.getline(cadena1, 50, '\n');
	cout << "Ingrese la cadena 2: ";
	cin.getline(cadena2, 50, '\n');
	cout << "Las cadenas son: " << cadena1 << " y " << cadena2 << endl;
	(strcmp(cadena1, cadena2) == 0) ? cout << "Las cadenas son iguales" << endl :
				((strcmp(cadena1,cadena2) > 0) ? cout << cadena1 << " es > alfabeticamente" << endl : cout << cadena1 << " es < alfabeticamente" << endl);
	return 0;
}
