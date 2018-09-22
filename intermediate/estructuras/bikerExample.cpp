#include <iostream>

using namespace std;

struct Etapa
{
	int horas;
	int minutos;
	int segundos;
};

int main()
{
	int N, secondsLeft, minutesLeft;
	cout << "Cuantas etapas son: ", cin >> N;
	struct Etapa etapas[N];

	int totalTimeHours = 0;
	int totalTimeMinutes = 0;
	int totalTimeSeconds = 0;

	for(int i = 0;i<N;i++)
	{
		cout << "===ETAPA " << i+1 << "===" << endl;
		cout << "Horas: ", cin >> etapas[i].horas;
		cout << "Minutos: ", cin >> etapas[i].minutos;
		cout << "Segundos: ", cin >> etapas[i].segundos;
		cout << endl;

		totalTimeHours += etapas[i].horas;
		totalTimeMinutes += etapas[i].minutos;
		totalTimeSeconds += etapas[i].segundos;
	}
	cout << "Tiempo total del corredor-> " << "Horas: " << totalTimeHours << ", Minutos: " << totalTimeMinutes << ", Segundos: " << totalTimeSeconds << endl;
	// refactorizado del tiempo
	totalTimeHours += (totalTimeMinutes / 60);
	totalTimeMinutes = (totalTimeMinutes % 60) + (totalTimeSeconds / 60);
	totalTimeSeconds = (totalTimeSeconds % 60);

	// imprimiendo las horas totales:
	cout << "Tiempo total del corredor: " << totalTimeHours << ":" << totalTimeMinutes << ":" << totalTimeSeconds << endl;
	return 0;
}

