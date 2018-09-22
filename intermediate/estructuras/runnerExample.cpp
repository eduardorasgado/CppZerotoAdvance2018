#include <iostream>

using namespace std;

struct Corredor
{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[30];
}
corredor1
;

int main()
{
	cout << "Nombre del corredor: ", cin.getline(corredor1.nombre, 30, '\n');
	cout << "Edad del corredor: ", cin >> corredor1.edad;
	cout << "Genero: ", cin.getline(corredor1.sexo, 10, '\n');
	cout << "club: ", cin.getline(corredor1.club, 30, '\n');

	// juvenil <= 18, senior <= 40 & >18, veterano >40
	string categoria = "juvenil";
	categoria = (corredor1.edad > 40) ? "veterano" : ((corredor1.edad <=40 && corredor1.edad >18) ? "senior" : "juvenil");

	cout << "============================================" << endl;
	cout << "Nombre: " << corredor1.nombre << endl;
	cout << "Edad: " << corredor1.edad << endl;
	cout << "Sexo: " << corredor1.sexo << endl;
	cout << "Categoria: " << categoria << endl;;
	return 0;
}

