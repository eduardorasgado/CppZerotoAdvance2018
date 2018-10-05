//
// Created by cheetos on 4/10/18.
//

#ifndef STATICMEMBERS_ESTATICO_H
#define STATICMEMBERS_ESTATICO_H

#include <iostream>

class Estatico
{
    private:
        // se declara para la clase no para un objeto en particular
        // static se declara en el cpp del respectivo header
        static int contador; // declaracion de un atributo estatico, es como una variable global para los objetos
        std::string nombre;

    public:
        Estatico()
        {
            contador++;
        }

        int getContador();

        // METODO DE TIPO ESTATICO
        // No le pertenece a los objetos, le pertenece a la clase
        static int sumar(int n1, int n2);
};

#endif //STATICMEMBERS_ESTATICO_H
