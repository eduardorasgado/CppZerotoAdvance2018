#pragma once

#include <iostream>

template <class T>
class Materia
{
    private:
        std::string nombreMateria;
        int clave;
        T nota1;

    public:
        Materia(std::string nombreMateria, int clave, T nota1)
        : nombreMateria{nombreMateria}, clave{clave}, nota1{nota1}{}

        ~Materia(){ } // Destructor

        //setters y getters
        void setNota(T nota)
        {
            this->nota1 = nota;
        }
        T getNota()
        {
            return this->nota1;
        }

        void showNota()
        {
            std::cout << "Materia: " << this->nombreMateria << std::endl;
            std::cout << "Clave: " << this->clave << std::endl;
            std::cout << "Nota: " << this->nota1 << std::endl << std::endl;
        }
};