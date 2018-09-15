#include <iostream>
// libreria estandar para cadenas de caracteres
#include <string>
// #include <cstdlib>
// #include <cstdio>

using namespace std;

int main(){
        cout << "******INTRODUCCION A LAS CADENAS DE CARACTERES**********" << endl;
        char word[] = "Eduardo";
        char wordTwo[] = {'E', 'd', 'u', 'a', 'r', 'd'};
	char nombre[30];

        cout << word << endl;
        cout << "Ohayou" << endl;
        cout << wordTwo << endl;

	//gets es una forma de obtener datos del cin
	cout << "Ingrese su nombre: ";
	//fgets(nombre, 30, stdin);
	// otra manera de conseguir los datos para el char:
	// donde guardar los datos de caracteres, el tamanio, cuando se termina de recolectar el dato
	cin.getline(nombre, 30, '\n');

	cout << "\n" << nombre << endl;
	return 0;
}


