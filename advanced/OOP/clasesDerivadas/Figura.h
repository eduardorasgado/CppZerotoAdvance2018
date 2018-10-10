//
// Created by cheetos on 10/10/18.
//

#ifndef CLASESDERIVADAS_FIGURA_H
#define CLASESDERIVADAS_FIGURA_H

class Figura
{
    private:
        int nLados;

    public:
        Figura(int nLados) : nLados {nLados} {}

        int getnLados();
};

#endif //CLASESDERIVADAS_FIGURA_H
