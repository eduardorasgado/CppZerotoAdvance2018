#pragma once

#include <iostream>

template <class T>
class Arreglo
{
    private:
        T* arreglo;
        int indice;
        int nElementos;

    public:
        Arreglo(int n)
        {
            this->arreglo = new T[n];
            this->indice = 0;
            this->nElementos = n;
        }
        ~Arreglo()
        {
            // es necesario por ser un arreglo
            delete[] arreglo;
        } // Destructor

        void agregar(T elemento)
        {
            // aumentando el indice despues de agregar el elemento
            if(this->arregloLleno()) std::cout << "El arreglo está lleno. Este elemento no será agregado" << std::endl;
            else this->arreglo[this->indice++]= elemento;
        }

        bool arregloLleno()
        {
            //
            if(indice >= nElementos) return true;
            return false;
        }

        void mostrarArreglo()
        {
            // indice debido a que el arreglo no siempre va a estar lleno
            for (int i = 0; i < indice; ++i) std::cout << *(this->arreglo+i) << " ";
            std::cout << std::endl;
        }

        void vaciarArreglo()
        {
            // vaciando los elementos que existen
            for (int i = 0; i < indice; ++i)
            {
                *(arreglo+i) = NULL;
            }
            //devolver a cero, ya que no hay mas elementos
            this->indice = 0;
        }
};