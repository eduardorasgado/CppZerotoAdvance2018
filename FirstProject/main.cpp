/*
archivos de cabecera
o headers
*/
#include <iostream>

int main()
{
    /*
    SECUENCUAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso
    \r -> retorno de carro
    \t -> tabulador
    */
    std::cout << "Este es mi primer programa del curso de c++\n" << "Mi nombre es Eduardo Rasgado Ruiz" << std::endl;
    // este mensaje se va a sobreponer con el segundo
    std::cout << "Hola este mensaje es impreso\r" << "Hola de nuevo" << std::endl;
    std::cout << "Hola\t" << "Hola despues del TAB" << std::endl;
    return 0;
}
