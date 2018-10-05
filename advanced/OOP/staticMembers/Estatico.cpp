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