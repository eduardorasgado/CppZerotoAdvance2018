#include <iostream>
#include "DayYear.h"

using namespace std;

void requestDate(string msg, int&, int&);

int main() {
    DayYear* hoy;
    DayYear* birthDay;
    int d, m;

    requestDate("====HOY====", d, m);
    hoy = new DayYear(d, m);

    requestDate("====TU CUMPLEAÑOS====", d, m);
    birthDay = new DayYear(d, m);

    hoy->visualizar();
    birthDay->visualizar();

    cout << endl;

    // debemos pasarlo con el puntero por ser objeto dinamico
    if(birthDay->igual(*hoy) == true) cout << "LAS FECHAS COINCIDEN" << endl;
    else
        cout << "LAS FECHAS NO COINCIDEN" << endl;

    return 0;
}

void requestDate(string msg, int& month, int& day)
{
    cout << msg << endl;
    cout << "Ingrese mes: ", cin >> month;
    cout << "Ingrese dia: ", cin >> day;
}
