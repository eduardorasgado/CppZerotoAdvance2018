
#include <iostream>

using namespace std;

int main() {
    // dos vectores de caracteres y almacenarlos en un nuevo vector, primero y segundo respectivamente
    // definiendo los dos vectores
    char characterVector[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char characterVectorTwo[] = {'g', 'h', 'i', 'j', 'k', 'l', 'm'};
    // obteniendo el tamano de ambos vectores sumados
    int totalLength = sizeof(characterVector) + sizeof(characterVectorTwo);
    // definiendo el arreglo donde se agregaran los dos anteriores
    char characterAdition[totalLength];
    // agregando los valores de los dos primeros arrays al resultante
    for(int i = 0; i < totalLength; i++) (characterAdition[i] = ((i < 6) ? characterVector[i] : characterVectorTwo[i-sizeof(characterVector)]));
    // imprimiendo
    for(int i = 0; i < totalLength; i++) cout << "adition[" << i << "]: " << characterAdition[i] << endl;

    return 0;
}
