#include <iostream>

using namespace std;

struct Alumno
{
	string nombre;
	int edad;
	float promedio;
}
alumnos[3]
;

int main()
{
	// Ejemplo de alumnos: 3 alumnos e imprimir el mas alto de promedio
	int major;
	for(int i = 0;i < 3;i++)
	{
		cout << "=====ALUMNO " << i << " =======" << endl;
		cout << "Nombre: ", cin >> alumnos[i].nombre;
		cout << "Edad: ", cin >> alumnos[i].edad;
		cout << "Promedio: ", cin >> alumnos[i].promedio;
	}

	cout << "=================================" << endl;
	for(int i = 0;i < 3;i++)
        {
		cout << "Nombre: " << alumnos[i].nombre << endl;
		cout << "Edad: " << alumnos[i].edad << endl;
		cout << "Promedio: " << alumnos[i].promedio << endl;
		cout << endl;
	}
	return 0;
}
