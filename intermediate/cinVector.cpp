#include <iostream>

using namespace std;

int main(){
    // vector, numero de elementos del vector
    int vectorStandard[5], vector_length;
    cout << "Ingrese el numero de elementos que va a tener su vector: " << endl;
    cin >> vector_length;

    for(int i = 0; i < vector_length; i++){
        // pidiendo el dato
        cout << "Por favor ingresa el numero " << i+1 << " del arreglo de 5 elementos: " << endl;
        // insertando el dato dentro del espacio i en el vector
        cin >> vectorStandard[i];
    }
    // espaciado
    cout << "\n\n";
    cout << "Y los datos son: " << endl;

    for(int i = 0; i < vector_length; i++){
        // mostrando el contenido del vector en pantalla
        cout << "vector[" << i << "]: " << vectorStandard[i] << endl;
    }
    return 0;
}
