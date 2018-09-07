#include <iostream>
#include <cstdlib> // rand()
#include <ctime> //para generar el numero aleatorio

using namespace std;

int main(){
    int userNumber, randomNumber, minimum = 1, maximum = 101, contador = 0;

    // generndo el numero aleatorio
    srand(time(NULL));

    // acotando el numero dentro de nuestros requerimientos
    randomNumber = minimum + rand() % (maximum +1 - minimum);

    // cout << randomNumber << endl;
    cout << "=====NUMERO MAGICO: ADIVINA EL NUMERO=====" << endl;
    cout << "Se ha generado el numero misterioso, es hora de jugar..." << endl;

    do{
        cout << "Digite un número: " << endl;
        cin >> userNumber;

        if(userNumber > randomNumber){
            cout << "Digite un número menor" << endl;
        }

        if(userNumber < randomNumber){
            cout << "Digite un numero mayor" << endl;
        }
        contador++;

    } while(userNumber != randomNumber);

    cout << "***Felicidades adivinaste el numero***" << endl;
    cout << "Número de intentos: " << contador << endl;
    return 0;
}
