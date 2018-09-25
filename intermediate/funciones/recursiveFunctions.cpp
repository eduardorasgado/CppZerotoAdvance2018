/*
 * Factoriales:
 * 3! = 3*2*1
 * factorial(n) = 1, si n = 0
 * n*factorial(n-1), si n > 0
 */
#include <iostream>

using namespace std;

//PROTOTIPOS
int recursive(int n);
void dataRequest();

//GLOBAL VARIABLES
int userNumber;

int main(int argc, char** argv)
{
    // Recursividad
    dataRequest();
    int result = recursive(userNumber);
    cout << result << endl;

    return 0;
}

int recursive(int n)
{
    if(n == 0) return 1;
    return n * recursive(n-1);
}

void dataRequest()
{
    cout << "=====FACTORIALES=====" << endl;
    cout << "Inserta tu numero: ", cin >> userNumber;
    cout << endl;
}