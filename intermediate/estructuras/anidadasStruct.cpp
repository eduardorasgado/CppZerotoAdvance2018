#include <iostream>

using namespace std;

struct info_direccion
{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado
{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}
// arreglo de estructuras
empleados[2]
;

int main(){
	// Estructuras anidadas
	for(int i = 0;i<2;i++)
	{
		cout << "Digite su nombre: ", cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Digite su dirección: ", cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
		cout << "Digite la ciudad: ", cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
		cout << "Inserte la provincia: ", cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
		cout << "Inserte el salario: ", cin >> empleados[i].salario;
		cout << "\n";

		// vaciando el buffer, para evitar reemplazar automaticamente con caracteres basura
                // en el siguiente cambio de i
                //fflush(stdin);
		cin.ignore();
	}
	// imprimiendo los datos
	cout << "=============================================" << endl;
	for(int i = 0;i<2;i++)
	{
		cout << "Nombre: " << empleados[i].nombre << endl;
		cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
		cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
		cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
		cout << "Salario: " << empleados[i].salario << endl;
		cout << "\n";
	}
	return 0;
}
