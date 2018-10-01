#include <iostream>

using namespace std;

struct Etapa
{
	int horas,
		minutos,
		segundos;
};

int requestPeriods();
void requestData(Etapa *, int&);
void totalTime(Etapa *, int&);

int main(void)
{
	// calculo del tiempo total de las etapas de un ciclista
	int N = requestPeriods();
	struct Etapa etapas[N];

	//puntero para las etapas
	Etapa *p_etapas = etapas;
	
	requestData(p_etapas, N);
	totalTime(p_etapas, N);
	
	return 0;
}

int requestPeriods()
{
	int N;
	cout << "Numero de las etapas: ", cin >> N;
	cout << endl;
	return N;
}

void requestData(Etapa *p_etapas, int& N)
{
	for(int i = 0; i < N;i++)
	{
		cout << "====ETAPA " << i+1 << "====" << endl;
		cout << "Horas: ", cin >> (p_etapas+i)->horas;
		cout << "Minutos: ", cin >> (p_etapas+i)->minutos;
		cout << "Segundos: ", cin >> (p_etapas+i)->segundos;
	}
	cout << endl;
}

void totalTime(Etapa *p_etapas, int& N)
{
	int h = 0, m = 0, s = 0;
	for(int i = 0;i < N; i++)
	{
		// obteniendo tiempo
		h += (p_etapas+i)->horas;
		m += (p_etapas+i)->minutos;
		s += (p_etapas+i)->segundos;
	}
	for(int i = 0;i < N; i++)
	{
		// dandole formato restictivo: inf:60:60 respectivamente
		h = h +(m/60) + ((s/60)/60);
		m = (m + (s/60))%60;
		s = s%60;
	}
	// imprimiendo
	cout << "Tiempo total: " << h << ":" << m << ":" << s << endl;
}