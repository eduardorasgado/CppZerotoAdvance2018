#include <iostream>

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
    return 0;
}

template <typename T>
T greaterThan(T dato1, T dato2)
{
    return (dato1>=dato2) ?  dato1 : dato2;
}