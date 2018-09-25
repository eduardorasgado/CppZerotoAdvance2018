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
date1,
date2
;

// PROTOTIPOS
void dataRequest();

int main(int argc, char** argv)
{
	return 0;
}

void dataRequest()
{
	struct dates[] = {date1, date2};
	for(int i=1; i<2;i++)
	{
		cout << "===FECHA " << i << "====" << endl;
		cout << "Inserte el dia: ", cin >> dates[i].day;
		cout << "Inserte el mes: ", cin >> dates[i].month;
		cout << "Inserte el año: "< cin >> dates[i].year;
	}
}
