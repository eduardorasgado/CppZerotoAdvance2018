#include <iostream>

using namespace std;

struct Persona {
	char nombre[20];
	int edad;
}
persona1 = {"Eduardo", 24},
persona2 = {"Alejandro", 22},
persona3
;

int main() {
	// Estructuras struct
	cout << "Nombre1 : " << persona1.nombre << endl;
	cout << "Edad de persona 1: " << persona1.edad << endl;

	cout << "Persona 2: " << persona2.nombre << endl;
	cout << "Edad de persona 2: " << persona2.edad << endl;

	cout << "===PERSONA 3====" << endl;
	// pedir los datos
	cout << "Inserte el nombre de la persona 3: ", cin.getline(persona3.nombre, 20, '\n');
	cout << "Edad de la persona 3: ", cin >> persona3.edad;
	cout << "============================" << endl;
	cout << "La persona 3 es: " << persona3.nombre << " y tiene " << persona3.edad << " años." << endl;
	return 0;
}
