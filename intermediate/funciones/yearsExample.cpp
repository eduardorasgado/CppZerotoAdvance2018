#include <iostream>

using namespace std;

void calc_years(int days, int&, int&, int&);
void showTime(int&, int&, int&);

int main(int argc, char** argv)
{
	int days, years = 0, months = 0, days2 = 0;
	cout << "Dias: ", cin >> days;
	cout << "Los dias son: " << days << endl;

	calc_years(days, years, months, days2);

	showTime(years, months, days2);

	return 0;
}

void calc_years(int days, int& years, int& months, int& days2)
{
	// start date = 1/1/2000
	// cada anio: 365 dias y mes: 30 dias
	years = days / 365;
	days %= 365;
	months = days / 30;
	days2 = days % 30;
}

void showTime(int& years, int& months, int& days2)
{
	cout << "Fecha actual: " << (days2 + 1) << "/" << (months + 1) << "/" << (2000 + years) << endl;
}
