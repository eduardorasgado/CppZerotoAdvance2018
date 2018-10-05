//
// Created by cheetos on 4/10/18.
//

#include "Estatico.h"

// INICIALIZAMOS EL VALOR DEL ATRIBUTO ESTATICO
int Estatico::contador = 0;

int Estatico::getContador()
{
    return contador;
}

// METODOS ESTATICOS: En el cpp ya no lleva la palabra clave static
int Estatico::sumar(int n1, int n2)
{
    int suma = n1+n2;
    return suma;
}