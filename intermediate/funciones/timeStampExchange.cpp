#include <iostream>

using namespace std;

// prototipos
void tiempo(int totalSeg, int&, int&, int&);
void showTime(int&, int&, int&);

int main(int argc, char** argv)
{
	int totalSegundos, hours = 0, minutes = 0, seconds = 0;
	cout << "Ingrese la cantidad de segundos a convertir: ", cin >> totalSegundos;

	cout << "La cantidad de segundos es: " << totalSegundos << endl;

	tiempo(totalSegundos, hours, minutes, seconds);
	showTime(hours, minutes, seconds);

	return 0;
}

void tiempo(int totalSeg, int& horas, int& minutos, int& segundos)
{
	// realiza la conversion del tiempo en segundos a un formato mas
	// digerible
	horas = totalSeg / 3600;
	totalSeg %= 3600;
	minutos = totalSeg / 60;
	segundos = totalSeg % 60;
}

void showTime(int& horas, int& minutos, int& segundos)
{
	cout << "======TIEMPO====" << endl;
	cout << horas << ":" << minutos << ":" << segundos << endl;
}

