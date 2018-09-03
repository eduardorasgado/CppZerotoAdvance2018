#include <iostream>

using namespace std;

int main()
{

    /**TIPO CHAR**/
    /*
    peso en bytes = 1
    N° de valores  = 256
    rango = de -128 A 127
    */

    // codigo ascii
    char letra = 65;
    cout << letra << " tiene " << sizeof(char) << " bytes" << endl;

    /**TIPO INT**/
    /*
    peso en byte = 4(puede variar)
    N° de valores = 2^32
    Rango = de -2,147,483,648 a 2,147,483,648
    */
    int numero = 0;
    // la cantidad de espacio en la memoria
    cout << numero << " tiene " << sizeof(int) << " bytes"  << endl;
    return 0;
}
