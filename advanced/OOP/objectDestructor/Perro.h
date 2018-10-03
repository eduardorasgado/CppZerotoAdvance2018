//
// Created by cheetos on 3/10/18.
//
#include <iostream>

using namespace std;

class Perro
{
    private:
        string nombre;
        string raza;

    public:
        // CONTRUCTOR DEL OBJETO
        // TAMBIEN ABARCAMOS LA AUTOREFERENCIA CON THIS
        Perro(string nombre, string raza) // constructor
        {
            this->nombre = nombre;
            this->raza = raza;
        }

        // DESTRUCTOR DEL OBJETO
        // Lleva una tilde
        ~Perro()
        {
            // Va vacio(no siempre) y se ocupa para desalojar memoria
            // que ocupa un objeto y su clase
        }
        void showData();
        void play();
};