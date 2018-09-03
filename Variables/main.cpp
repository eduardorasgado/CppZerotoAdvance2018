#include <iostream>

using namespace std;

int main()
{
    /**TABLA DE BITS Y BYTES**/
    /*
    1 bit guarda 1 o 0
    1 bit puede almacenar dos valores
    1 byte = 8 bits, esto es 2^8 = 256 valores

    1 bit = 2¹ = 2
    2 bits = 2² = 4
    3 bits = 2³ = 8
    4 bits = 2⁴ = 16
    5 bits = 2⁵ = 32
    6 bits = 2⁶ = 64
    7 bits = 2⁷ = 128
    8 bits = 2⁸ = 256 = 1 byte

    4 bytes = 2⁸*⁴ = 2³² bites
    */

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
    peso en bits = 4*8 = 32 bits
    N° de valores = 2^32
    Rango = de -2,147,483,648 a 2,147,483,647

    con 32 bits:
    1 bit ->signo
    31bits -> valores que puede tomar: 2³¹ -> 2,147,483,648
    */
    int numero = 0;
    // la cantidad de espacio en la memoria
    cout << numero << " tiene " << sizeof(int) << " bytes"  << endl;

    /*
    32 bits -> 2³² bits
    con unsigned
    */
    unsigned int edad = 45;
    cout << edad << endl;

    // ocurre un desbordamiento, en tal caso solo imprimira en maximo valor posible
    //unsigned int edad = -45;

    /**TIPOS: BOOL          FLOAT           BOUBLE**/
    /**PESO:  1byte         4 bytes         8 bytes**/
    /**RANGO: -       1.17e-38 a 3.40e38   2.22e-308 a 1.80e308**/

    bool permitido = false;
    float gravedad = 9.81;
    double aLot = 252262;

    cout << "Booleano: " << permitido << ", tiene: " << sizeof(bool) << " bytes" <<endl;
    cout << "Flotante: " << gravedad << ", tiene: " << sizeof(float) << " bytes" <<endl;
    cout << "Double: " << aLot << ", tiene: " << sizeof(double) << " bytes" <<endl;

    return 0;
}
