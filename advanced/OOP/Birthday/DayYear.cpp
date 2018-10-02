//
// Created by cheetos on 2/10/18.
//

#include "DayYear.h"
#include <iostream>

using namespace std;

bool DayYear::igual(DayYear& dm)
{
    if(this->day == dm.day && this->month == dm.month) return true;
    return false;
}

void DayYear::visualizar()
{
    cout << "Mostrando los datos: " << endl;
    cout << "day: " << this->day << ", month: " << this->month << endl;
}