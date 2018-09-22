#include <iostream>

using namespace std;

struct Atleta
{
	char nombre[60];
	char pais[60];
	int numero_medallas;
};

int main()
{
	// mostrar el atleta que ha ganado el mayornumero de medallas
	int N, major = 0;
	cout << "Ingresa la cantidad de atletas: ", cin >> N;
	cin.ignore();
	struct Atleta atletas[N];
	for(int i = 0;i<N;i++)
	{
		cout << "==Atleta " << i+1 << "==" << endl;
		cout << "Nombre: ", cin.getline(atletas[i].nombre, 60, '\n');
		cout << "Pais de origen: ", cin.getline(atletas[i].pais, 60, '\n');
		cout << "Número de medallas: ", cin >> atletas[i].numero_medallas;
		cout << endl;
		major = (atletas[i].numero_medallas > atletas[major].numero_medallas) ? i : major;
		cin.ignore();
	}
	// imprimiendo el atleta con mas medallas
	cout << " El atleta con mayor número de medallas es: " << atletas[major].nombre << " de " << atletas[major].pais << endl;
	return 0;
}
