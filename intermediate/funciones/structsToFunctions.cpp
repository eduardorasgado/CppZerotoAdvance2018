#include <iostream>

using namespace std;

// ESTRUCTURAS
struct Persona
{
	char nombre[60];
	int edad;
}
// instancias de la esturctura
persona1
;

// PROTOTIPOS DE FUNCION
void dataRequest();
// enviandole datos tipo estructura al prototipo
void showData(Persona);

int main(int argc, char** argv)
{
	dataRequest();

	showData(persona1);

	return 0;
}

void dataRequest()
{
	cout << "Inserte su nombre: ", cin.getline(persona1.nombre, 60, '\n');
	cout << "Iserte su edad: ", cin >> persona1.edad;
}

void showData(Persona p)
{
	cout << "Nombre: " << p.nombre << endl;
	cout << "Edad: " << p.edad << endl;
}
