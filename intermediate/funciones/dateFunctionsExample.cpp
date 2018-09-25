#include <iostream>

using namespace std;

// ESTRUCTURAS
struct Date
{
	int day,
	    month,
	    year;
}
// instancias de estructura Date
dates[2]
;

// PROTOTIPOS
void dataRequest();
Date nearestDate(Date, Date);
void showDate(Date);
int main(int argc, char** argv)
{
    dataRequest();
    Date nearest = nearestDate(dates[0], dates[1]);
    showDate(nearest);

	return 0;
}

void dataRequest()
{
	for(int i=0; i<2;i++)
	{
		cout << "===FECHA " << i << "====" << endl;
		cout << "Inserte el dia: ", cin >> dates[i].day;
		cout << "Inserte el mes: ", cin >> dates[i].month;
		cout << "Inserte el año: ", cin >> dates[i].year;
		cout << endl;
	}
}

Date nearestDate(Date d1, Date d2)
{
    // busca la fecha mas cercana

    if(d1.year >= d2.year && d1.month >= d2.month && d1.day >= d2.day) return d1;
    return d2;
}

void showDate(Date date)
{
    cout << "Día mas cercano: " << date.day << "/" << date.month << "/" << date.year << endl;
}