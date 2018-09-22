#include <iostream>

using namespace std;

struct Promedio
{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno
{
	char nombre[60];
	char sexo[1];
	int edad;
	struct Promedio promedio_alumno;
};

int main()
{
	// dos estructuras yanidacon
	float promedio;
	struct Alumno alumno1;

	// peticion de datos
	cout << "======PETICION DE DATOS==========" << endl;
	cout << "Nombre del alumno: ", cin.getline(alumno1.nombre, 61, '\n');
	cout << "Género del alumno: ", cin.getline(alumno1.sexo, 2, '\n');
	cout << "Nota 1: ", cin >> alumno1.promedio_alumno.nota1;
	cout << "Nota 2: ", cin >> alumno1.promedio_alumno.nota2;
	cout << "Nota 3: ", cin >> alumno1.promedio_alumno.nota3;

	// Calculo del promedio
	promedio = (alumno1.promedio_alumno.nota1 +
		   alumno1.promedio_alumno.nota2 +
		   alumno1.promedio_alumno.nota3) / 3;
	// imprimiendo datos
	cout << "=====IMPRIMIENDO DATOS========" << endl;
	cout << "Nombre del alumno: " << alumno1.nombre << endl;
	cout << "Género del alumno: " << alumno1.sexo << endl;
	cout.precision(2);
	fixed;
	cout << "Promedio: " << promedio << endl;
	return 0;
}
