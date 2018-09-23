#include <iostream>

using namespace std;

void calc_years(int totalDays, int&, int&, int&);
void showTime(int&, int&, int&);

int main(int argc, char** argv)
{
	int totalDays, years = 0, months = 0, days = 0;
	cout << "Dias: ", cin >> totalDays;
	cout << "Los dias son: " << totalDays << endl;

	calc_years(totalDays, years, months, days);

	showTime(years, months, days);

	return 0;
}

void calc_years(int totalDays, int& years, int& months, int& days)
{
	// start date = 1/1/2000
	// cada anio: 365 dias y mes: 30 dias
	years = totalDays / 365;
	totalDays %= 365;
	months = totalDays / 30;
	days = totalDays % 30;
}

void showTime(int& years, int& months, int& days)
{
	cout << "Fecha actual: " << (days + 1) << "/" << (months + 1) << "/" << (2000 + years) << endl;
}
