//
// Created by cheetos on 4/10/18.
//

#ifndef STATICMEMBERS_ESTATICO_H
#define STATICMEMBERS_ESTATICO_H

#include <iostream>

class Estatico
{
    private:
        static int contador; // declaracion de un atributo estatico, es como una variable global para los objetos
        std::string nombre;

    public:
        Estatico()
        {
            contador++;
        }

        int getContador();
};

#endif //STATICMEMBERS_ESTATICO_H
