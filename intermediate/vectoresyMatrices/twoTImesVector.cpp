#include <iostream>

using namespace std;

int main(){
    // leer 5 numeros en un arreglo, copiar a otro rreglo multiplicado
    // por dos. e imprimir ese segundo arreglo

    int length = 5;
    int numberVector[length];
    int vectorFinal[length];

    for(int i = 0; i < length; i++){
        cout << "Dame el numero de la pocisión " << i << " de tu arreglo: " << endl;
        cin >> numberVector[i];
        vectorFinal[i] = numberVector[i] * 2;
    }
    //imprimiendo el vector final
    cout << "Vector Final:" << endl;
    for (int i = 0; i < length; i++) cout << "vectorFinal[" << i <<"]: " << vectorFinal[i] << endl;
    cout << "yeii" << endl;
    return 0;
}
