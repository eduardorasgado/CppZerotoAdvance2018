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
        int mejorPromedioIndice = 0;
	float mejorPromedio;
	int nAlumnos;
	cout << "Ingrese el número de alumnos: ", cin >> nAlumnos;
	// ignorando el garbage del buffer
	cin.ignore();
        struct Alumno alumnos[nAlumnos];

        // peticion de datos
	for(int i = 0;i < nAlumnos;i++)
	{
        	cout << "======ALUMNO " << i+1 << "==========" << endl;
        	cout << "Nombre del alumno: ", cin.getline(alumnos[i].nombre, 61, '\n');
        	cout << "Género del alumno: ", cin.getline(alumnos[i].sexo, 2, '\n');
        	cout << "Nota 1: ", cin >> alumnos[i].promedio_alumno.nota1;
        	cout << "Nota 2: ", cin >> alumnos[i].promedio_alumno.nota2;
        	cout << "Nota 3: ", cin >> alumnos[i].promedio_alumno.nota3;
		cout << endl;

		cin.ignore();

		float promedio = (alumnos[i].promedio_alumno.nota1 +
                   	   alumnos[i].promedio_alumno.nota2 +
                           alumnos[i].promedio_alumno.nota3) / 3;

		mejorPromedioIndice = (promedio > mejorPromedio) ? i : mejorPromedioIndice;
		mejorPromedio = (promedio > mejorPromedio) ? promedio : mejorPromedio;
	}

        // imprimiendo datos
        cout << "=====IMPRIMIENDO DATOS DE MEJOR PROMEDIO========" << endl;
        cout << "Nombre del alumno: " << alumnos[mejorPromedioIndice].nombre << endl;
        cout << "Género del alumno: " << alumnos[mejorPromedioIndice].sexo << endl;
        cout.precision(2);
        fixed;
        cout << "Promedio: " << mejorPromedio << endl;
	return 0;
}
