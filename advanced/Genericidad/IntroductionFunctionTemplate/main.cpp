#include <iostream>

// Incluimos el header de tipo plantilla de funcion
#include "GreaterThanDiff.h"

// Creando plantillas de funciones
/*
 * Podemos ocupar:
 *  class
 *  typename
 *
 *  Conn esto tenemos tipos de datos genericos
 * */
template <typename T>
T greaterThan(T dato1, T dato2);

int main() {
    // Enteros
    std::cout << "El mayor de dos enteros es: " << greaterThan(4, 6) << std::endl;
    // Flotantes
    std::cout << "El mayor de dos reales es: " << greaterThan(5.77, 8.0987) << std::endl;
    // Caracteres
    std::cout << "El mayor de dos caraacteres es: " << greaterThan('d', 'f') << std::endl;
    // doubles
    std::cout << "El mayor de dos numeros es: " << greaterThan(346374754, 12532363) << std::endl;

    std::cout << "---------------" << std::endl;
    /*
     * Resolucion para distintos tipos de datos dentro de una misma funcion
     *
     * La podemos ocupar ya que hemos importado el header en el inicio de nuestro archivo
     * */
    std::cout << "El mayor de dos datos(entero y flotante) es: " << greaterThanDiff(10, 3.5667) << std::endl;
    std::cout << "El mayor de dos datos(double y flotante) es: " << greaterThanDiff(106666633.4, 3.5667) << std::endl;

    return 0;
}

template <typename T>
T greaterThan(T dato1, T dato2)
{
    return (dato1>=dato2) ?  dato1 : dato2;
}
