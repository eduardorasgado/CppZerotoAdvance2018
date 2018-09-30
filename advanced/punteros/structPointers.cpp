#include <iostream>

using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}
persona,
*puntero_persona = &persona
;

void requestData();
void showData(Persona *);

int main()
{
	// punteros a estructuras
	requestData();
	showData(puntero_persona);
	return 0;
}

void requestData()
{
	// guardamos datos de una estructura de tipo puntero
	cout << "Digite su nombre: ";
	cin.getline(puntero_persona->nombre, 30,'\n');

	cout << "Digite su edad: ";
	cin >> puntero_persona->edad;
}

void showData(Persona *puntero_persona)
{
	cout << "\nSu nombre es: " << puntero_persona->nombre << endl;
	cout << "Su edad es: " << puntero_persona->edad << endl;
}