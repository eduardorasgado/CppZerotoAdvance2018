#include <iostream>

using namespace std;

struct Empleado
{
	//string nombre;
	char nombre[30];
	char genero[1];
	float salario;
};

int main()
{
	// preguntar numero de empleados y calcular empleado con mayor y menor salario
	int N, major = 0, minor = 0;
	cout << "Ingrese el numero de empleados que desea ingresar: ", cin >> N;
	// eliminando buffer
	cin.ignore();
	struct Empleado empleados[N];

	// peticion de datos
	for(int i = 0;i<N;i++)
	{
		cout << "=====EMPLEADO " << i+1 << "=======" << endl;
		cout << "Nombre: "; cin.getline(empleados[i].nombre,30, '\n');
		// limpiando del cin.getline para poder usar el getline dentro de un ciclo y no directo del main
		cin.clear();

		cout << "Genero: ", cin.getline(empleados[i].genero, 2, '\n');
		cout << "Salario: ", cin >> empleados[i].salario;
		cout << endl;
		// obteniendo los salarios alto y bajo
		major = (empleados[i].salario > empleados[major].salario) ? i : major;
		minor = (empleados[i].salario < empleados[minor].salario) ? i : minor;
		// limpiando buffer
		cin.ignore();
 	}

	cout << "==================================" << endl;
	// impresion de datos
        for(int i = 0;i<N;i++)
        {
                cout << "==EMPLEADO " << i+1 << "==" << endl;
                cout << "Nombre: " << empleados[i].nombre << endl;
                cout << "Genero: " << empleados[i].genero << endl;
                cout << "Salario: " << empleados[i].salario << endl;
                cout << endl;
        }
	cout << "==========EL SALARIO LIMITE INFERIOR=============" << endl;
	cout << "==EMPLEADO " << minor+1 << "==" << endl;
        cout << "Nombre: " << empleados[minor].nombre << endl;
        cout << "Genero: " << empleados[minor].genero << endl;
        cout << "Salario: " << empleados[minor].salario << endl;
        cout << endl;

	cout << "=========EL SALARIO LIMITE SUPERIOR=============" << endl;
	cout << "==EMPLEADO " << major << "==" << endl;
        cout << "Nombre: " << empleados[major].nombre << endl;
        cout << "Genero: " << empleados[major].genero << endl;
        cout << "Salario: " << empleados[major].salario << endl;
        cout << endl;

	return 0;
}
