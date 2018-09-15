#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cadenaUsuario[50];
	cout << "Inserte su cadena de caracteres: ";
	// donde se va a guardar, maxima longitud y con que va a saber donde termina
	cin.getline(cadenaUsuario, 50, '\n');
	char cadenaCopy[strlen(cadenaUsuario)];
	strcpy(cadenaCopy, cadenaUsuario);
	cout << "La cadena copiada es: " << cadenaCopy << endl;
	return 0;
}
