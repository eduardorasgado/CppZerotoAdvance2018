#include <iostream>

using namespace std;

// ESTRUCTURAS
struct Alumno
{
	char nombre[60];
	int edad;
	float promedio;
};

// PROTOTIPOS
int howMany();
void requestData(Alumno *, int&);
void mejorAlumno(Alumno *, int&);

//=======================00
int main(void)
{
	int N = howMany();
	// creamos la estructura normal
	struct Alumno alumnos[N];
	// puntero para arreglo de estructuras
	Alumno *pAlumnos = alumnos;

	requestData(pAlumnos, N);

	mejorAlumno(pAlumnos, N);
	return  0;
}
//===========================
int howMany()
{
	int N;
	cout << "Cuantos alumnos son?: ", cin >> N;
	return N;
}

void requestData(Alumno *pAlumnos, int& N)
{
	for(int i = 0;i < N;i++)
	{
		cin.ignore();
		cout << "Nombre: ", cin.getline((pAlumnos+i)->nombre, 60, '\n');
		cout << "Edad: ", cin >> (pAlumnos+i)->edad;
		cout << "Promedio: ", cin >> (pAlumnos+i)->promedio;
	}
}

void mejorAlumno(Alumno *pAlumnos, int& N)
{
	float bestNote = 0.0;
	int index = 0;
	for(int i = 0;i < N; i++)
		if((pAlumnos+i)->promedio > bestNote) index = i, bestNote = (pAlumnos+i)->promedio;
	// imprimiendo resultado
	cout << "El mejor alumno es: " << (pAlumnos+index)->nombre << ", su promedio es de: " << bestNote;
	cout << endl;
}