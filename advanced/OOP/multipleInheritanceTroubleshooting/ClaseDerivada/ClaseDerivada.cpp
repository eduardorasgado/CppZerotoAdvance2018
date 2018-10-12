//
// Created by cheetos on 12/10/18.
//

#include "ClaseDerivada.h"

int ClaseDerivada::getX()
{
    /* por el momento gracias a lo que hicimos en el
     * constructor de la clase derivada, no hay conflictos
     * con este metodo getter
    */
    return this->x;
}

int ClaseDerivada::getXbase1()
{
    /*
     * OPERADOR DE RESOLUCION DE AMBITO:
     *El operador de resolución de ámbito :: se usa para
     * identificar los identificadores usados en distintos
     * ámbitos y eliminar la ambigüedad entre ellos.
     * */
    //return
}