#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char nombre[] = "EDUARDO";
	char nombre2[20];
	// cadna vacia, cadena con contenido
	strcpy(nombre2, nombre);
	cout << nombre2 << endl;
	return 0;
}
