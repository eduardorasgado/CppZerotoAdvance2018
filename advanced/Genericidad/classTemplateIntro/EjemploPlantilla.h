#pragma once

#include <iostream>

template <class T1, class T2>
class EjemploPlantilla
{
    private:
        T1 dato1;
        T2 dato2;

    public:
        EjemploPlantilla(T1 dato1, T2 dato2)
        : dato1{dato1}, dato2{dato2}{}

        ~EjemploPlantilla(){ } // Destructor

        //setters y getters
        void setDato1(T1 dato1)
        {
            this->dato1 = dato1;
        }
        T1 getDato1()
        {
            return this->dato1;
        }
        void setDato2(T2 dato2)
        {
            this->dato2 = dato2;
        }
        T2 getDato2()
        {
            return this->dato2;
        }

        void mostrarDatos()
        {
            std::cout << "Dato1: " << this->dato1 << std::endl;
            std::cout << "Dato2: " << this->dato2 << std::endl;
        }
};