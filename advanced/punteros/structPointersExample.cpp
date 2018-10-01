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

//=======================00
int main(void)
{
	int N = howMany();
	// creamos la estructura normal
	struct Alumno alumnos[N];
	// puntero para arreglo de estructuras
	Alumno *pAlumnos = alumnos;

	requestData(pAlumnos, N);

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