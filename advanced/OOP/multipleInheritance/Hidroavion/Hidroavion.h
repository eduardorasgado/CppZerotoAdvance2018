//
// Created by cheetos on 12/10/18.
//

#ifndef MULTIPLEINHERITANCE_HIDROAVION_H
#define MULTIPLEINHERITANCE_HIDROAVION_H

#include "../Barco/Barco.h"
#include "../Avion/Avion.h"
#include <iostream>

class Hidroavion : public Barco, public Avion
{
    private:
        std::string codigo;

    public:
        /*
         * Clases de herencia multiple deben de tener constructores
         * de acuerdo al orden de las clases heredadas
         * */
        Hidroavion(std::string nombre, std::string modelo,
                std::string codigo) : Barco(nombre), Avion(modelo)
        {
            this->codigo = codigo;
        }

        ~Hidroavion(){} // Destructor

        std::string getCodigo();

        void mostrarDatos();
};

#endif //MULTIPLEINHERITANCE_HIDROAVION_H
