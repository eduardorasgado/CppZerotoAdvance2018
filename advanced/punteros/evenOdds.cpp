#include <iostream>

using namespace std;

void dataRequest(int&);
void computeOdds(int*);

int main(void)
{
    // numero / puntero para guardar
    int n, *dir_n;
    // guardando la ubucacion de memoria de n
    dir_n = &n;
    // mandando la direccion de memoria
    dataRequest(n);

    computeOdds(dir_n);

    return 0;
}

void dataRequest(int& n)
// llamando por puntero
{
    //guardando el dato en la variable que guarda el espacio de memoria
    cout << "Inserte el numero a guardar: ", cin >> n;
    cout << endl;
}

void computeOdds(int *dir_n)
{
    // coprobando si un valor es par o impar
    if(*dir_n % 2 == 0) cout << "El numero " << *dir_n << " es par" << endl;
    else cout << "El numero " << *dir_n << " es impar" << endl;

    // imprimir la ubicacion e memoria del puntero
    cout << "La ubicacion de memoria es: " << dir_n << endl;
}