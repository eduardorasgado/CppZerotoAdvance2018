
#include <iostream>

using namespace std;

int main() {
    // buscar un elemento que resulte de la suma del resto de los elementos
    // del vector
    int myVector[] = {1,2,3,5,11}, resultante = -9999, sumaTotal = 0;

    /************************************ALGORITMO**********************************************/
    // calculando la suma total del vector
    for (int i = 0; i < 5; i++) sumaTotal += myVector[i];
    // algoritmo
    for(int i = 0; i < 5; i++) for(int k = 0; k < 5; k++) resultante = (myVector[i] == (sumaTotal-myVector[i]) && i != k) ? myVector[i] : resultante;
    /******************************************************************************************/
    if(resultante == -9999) return 0;
    cout << "El vector es: " << endl;
    for (int i = 0; i < 5; i++) cout << "vector[" << i << "]:" << myVector[i] << endl;
    cout << "Y el numero que surge de la suma del resto es: " << resultante << endl;
    return 0;
}
