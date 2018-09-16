#include <iostream>
#include <cstring>

using namespace std;

int main(){
	// concatenar hola que tal (nombre de usuario)
	char saludo[] = "Hola que tal ";
	char name[50];
	cout << "Cual es tu nombre?: ";
	cin.getline(name, 30, '\n');
	strcat(saludo, name);
	cout << saludo << endl;
	return 0;
}
