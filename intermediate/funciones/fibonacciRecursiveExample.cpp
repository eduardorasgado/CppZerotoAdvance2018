#include <iostream>

using namespace std;

int fibonacci(int num);
void fibonacciCycle(int num);
int dataRequest();

int main(int argc, char** argv)
{
    // funcion recursiva para la serie fibonacci
    int num =  dataRequest();
    fibonacciCycle(num);

    cout << endl;

    return 0;
}

int dataRequest()
{
    int n;
    bool accepted = false;
    while(accepted == 0)
    {
        cout << "INgrese su numero de iteracion: ", cin >> n;
        if(n >= 0) break;
    }
    return n;
}
//int past = 0;
//int counter = 1;
int fibonacci(int num)
{
    if(num < 2) return num;

    return fibonacci(num-1)+ fibonacci(num-2);
}

void fibonacciCycle(int num)
{
    // funcion que usa a la funcion fibonacci e imprime
    // ante la iteracion
    for (int i = 0; i < num; ++i) cout << fibonacci(i) << " ";
    cout << endl;
}