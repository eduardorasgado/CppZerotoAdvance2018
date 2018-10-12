//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCETROUBLESHOOTING_CLASEDERIVADA_H
#define MULTIPLEINHERITANCETROUBLESHOOTING_CLASEDERIVADA_H

#include "../ClaseBase1/ClaseBase1.h"
#include "../ClaseBase2/ClaseBase2.h"

class ClaseDerivada : public ClaseBase1, public ClaseBase2
{
    protected:
        int x;

    public:
        /* no podemos hacer esto intx, int x, int x
        * podemos diferenciarlos con nombres distintos
         * NOTESE:
         * Aqui hay una ambiguedad terrible heredando de
         * clases base con la misma variable x
        */
        ClaseDerivada(int x1, int x2, int x)
        : ClaseBase1(x1), ClaseBase2(x2)
        {
            this->x = x;
        }

        ~ClaseDerivada(){} // Destructor

        int getX();
        // METODO EN EL QUE ACCEDEMOS A LA X DE UNA CLASE BASE DESEADA
        int getXbase1();

        int getXbase2();
};

#endif //MULTIPLEINHERITANCETROUBLESHOOTING_CLASEDERIVADA_H
