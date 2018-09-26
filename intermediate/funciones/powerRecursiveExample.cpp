#include <iostream>

using namespace std;

long powerRec(int num, int y);
void requestData(int&, int&);

int main(int argc, char** argv)
{
    int x, y;
    requestData(x, y);

    cout << powerRec(x, y) << endl;

    return 0;
}

long powerRec(int num, int y)
{
    if(y == 1) return num;
    return num * powerRec(num, y-1);
}

void requestData(int& x,int& y)
{
    cout << "Inserta tu numero base: ", cin >> x;
    cout << "Inserta tu potencia: ", cin >> y;
    cout << endl;
}