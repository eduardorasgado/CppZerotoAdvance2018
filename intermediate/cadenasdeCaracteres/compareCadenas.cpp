#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cadena1[] = "Oduardo";
	char cadena2[] = {'E', 'd', 'u', 'a', 'r', 'd', 'o'};

	// comparando las cadenas
	(strcmp(cadena1, cadena2) == true) ? cout << "Las cadenas son iguales" << endl : cout << "Las cadenas son diferentes" << endl;
	(strcmp(cadena1, cadena2) > 0) ? cout << cadena1 << " > (alfabeticamente) " << cadena2 : cout << cadena1 << " < (alfabeticamente)" << cadena2;
	cout << endl;
	return 0;
}
