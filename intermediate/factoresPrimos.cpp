#include <iostream>

using namespace std;

int main(){
    // calcular descompocision en factores primos de un numero entero
    // ejemplo: 20 = 2 * 2 * 5
    int userNumber, overNumber = 2;

    cout << "====CALCULO DE FACTORES PRIMOS=====" << endl;
    cout << "Ingresa tu valor: " << endl;
    cin >> userNumber;
    // sale del programa si no es positivo el numero
    if(userNumber <= 0) return 0;

    do{
        if(!(userNumber % overNumber)){
            userNumber /= overNumber;
            cout << overNumber << endl;
        }
        else overNumber++;

    } while(userNumber > 1);

    return 0;
}
