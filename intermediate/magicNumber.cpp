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

    cout << randomNumber << endl;

    return 0;
}
