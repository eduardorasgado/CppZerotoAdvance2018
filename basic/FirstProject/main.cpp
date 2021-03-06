/*
archivos de cabecera
o headers
*/
#include <iostream>
/*
Author: Eduardo Rasgado Ruiz
email: eduardo.rasgado@outlook.com
*/

int main()
{
    /*
    SECUENCUAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso
    \r -> retorno de carro
    \t -> tabulador

    \b retrocede el cursor 1 solo espacio, y hay un espacio en blanco luego de la secuencia de escape que
    reemplazará el último '!' dejando la salida con 1 solo ! como corresponde:

    hola!!\b generara hola!
    */
    std::cout << "Este es mi primer programa del curso de c++\n" << "Mi nombre es Eduardo Rasgado Ruiz" << std::endl;
    // este mensaje se va a sobreponer con el segundo
    std::cout << "Hola este mensaje es impreso\r" << "Hola de nuevo" << std::endl;
    std::cout << "Hola\t" << "Hola despues del TAB" << std::endl;

    // MENSAJES POR CONSOLA
    std::cout << "MENSAJES POR CONSOLA";
    // esto se imprime al costado del primer mensaje
    std::cout << "MENSAJES POR CONSOLA 2" << std::endl; // este es un comentario

    return 0;
}
