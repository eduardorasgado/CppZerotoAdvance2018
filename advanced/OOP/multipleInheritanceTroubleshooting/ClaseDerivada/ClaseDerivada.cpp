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
    // return this->x;

    // Aplicandolo a metodos ambiguos:
    return ClaseBase1::getX();
}

int ClaseDerivada::getXbase1()
{
    /*
     * OPERADOR DE RESOLUCION DE AMBITO:
     *El operador de resolución de ámbito :: se usa para
     * identificar los identificadores usados en distintos
     * ámbitos y eliminar la ambigüedad entre ellos.
     * */
    // Descartamos esto:
    //return x;

    // En su lugar usamos:
    return ClaseBase1::x;
}

int ClaseDerivada::getXbase2()
{
    // Scope Resolution operator ::
    return ClaseBase2::x;
}