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
        Perro(string _nombre, string _raza) // constructor
        {
            nombre = _nombre;
            raza = _raza;
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