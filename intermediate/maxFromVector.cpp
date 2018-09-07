#include <iostream>

using namespace std;

int main() {
    // max element from a vector
    int length, maxData = 0;
    cout << "Ingrese el numero de elementos que va a tener el arreglo: " << endl;
    cin >> length;
    // declarando un arreglo con una longitud definida por el usuario
    int vectorData[length];

    // el usuario agrega los elementos del vector
    for(int i = 0; i < length; i++){
        cout << "Ingrese el valor del elemento " << i+1 << " de tu arreglo: " << endl;
        cin >> vectorData[i];
        // se extrae el numero mas grande
        maxData = (vectorData[i] > maxData) ? vectorData[i] : maxData;
        maxData = (i==0) ? vectorData[i] : maxData;
    }

    cout << "Tu arreglo es: " << endl;

    // se imprime el arreglo y el numero mas grande
    for(int i = 0; i < length; i++) cout << "vector[" << i << "]: " << vectorData[i] << endl;
    cout << "El numero mas grande de tu arreglo es: " << maxData << endl;
    return 0;
}
