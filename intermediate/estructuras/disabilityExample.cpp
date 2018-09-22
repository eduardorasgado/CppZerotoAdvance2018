#include <iostream>
#include <cstring>

using namespace std;

struct Persona
{
	char nombre[60];
	bool disability;
};

int main()
{
	// De un vestor de personas, clasificar en dos vectores los que tengan o no discapacidades.
	int N;
	// para clasificar a las personas
        int disabilityPeople = 0;
        int noDisabilityPeople = 0;

	cout << "Ingrese el numero de personas: ", cin >> N;
	//limpiando el buffer
	cin.ignore();
	struct Persona personas[N];
	// Descripcion de las personas
	for(int i = 0;i < N;i++)
	{
		cout << "Nombre de la persona: ", cin.getline(personas[i].nombre, 61, '\n');
		cout << "Discapacidad: " << endl;
		cout << "1. Si" << endl;
		cout << "0. No" << endl;
		cout << "Su respuesta: ", cin >> personas[i].disability;
		cout << endl;
		cin.ignore();

		// agregando a los contadores
		disabilityPeople += (personas[i].disability == 1) ? 1 : 0;
		noDisabilityPeople += (personas[i].disability == 0) ? 1 : 0;
	}

	// clasificando a las personas(creando sus arreglos)
	struct Persona disables[disabilityPeople];
	struct Persona noDisables[noDisabilityPeople];

	// flags para rellenar los arreglos creados con anterioridad sin excederse de su
	// longitud
	int d = 0, nd = 0;
	for(int i = 0; i < N;i++)
	{
		if(personas[i].disability == 1)
		{
			strcpy(disables[d].nombre, personas[i].nombre);
			disables[d].disability = 1;
			d++;
		}

		if(personas[i].disability == 0)
		{
			strcpy(noDisables[nd].nombre, personas[i].nombre);
			noDisables[nd].disability = 0;
			nd++;
		}
	}

	// imprimiendo a las personas clasificadas
	// discapacidad
	cout << "====PERSONAS DISCAPACITADAS=====" << endl;
	for(int i = 0;i < disabilityPeople;i++) cout << "Nombre: " << disables[i].nombre << '\n' << endl;

	cout << "====PERSONAS NO DISCAPACITADAS=====" << endl;
	for(int i = 0;i < noDisabilityPeople;i++) cout << "Nombre: " << noDisables[i].nombre << '\n' << endl;
	return 0;
}
