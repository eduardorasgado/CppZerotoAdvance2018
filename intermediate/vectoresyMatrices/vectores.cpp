
#include <iostream>

using namespace std;

int main(){
    /**VECTORES: CLASE 1 - INTRODUCCION A LOS VECTORES**/
    // declaramos el vector
    int numeros[] = {1, 2, 3, 4, 5}, suma = 0;
    // ejecutando la suma
    for(int i = 0; i <= 4; i++) suma += numeros[i];
    cout << "La suma de tales elementos es: " << suma << endl;

    /**VECTORES: CLASE 2**/
    // declaramos el vector
    int numeros2[] = {1, 2, 3, 4, 5}, times = 1;
    // ejecutando la suma
    for(int i = 0; i <= 4; i++) times *= numeros2   [i];
    cout << "La multiplicacion de tales elementos es: " << times << endl;
    return 0;
}
