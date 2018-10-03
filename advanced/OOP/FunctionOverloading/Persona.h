//
// Created by cheetos on 3/10/18.
//

#include <iostream>

using namespace std;

class Persona
{
    private:
        string nombre;
        int edad;
        string ife;

    public:
        Persona(string _nombre, int _edad)  // METODO CONSTRUCTOR 1
        {
            nombre = _nombre;
            edad = _edad;
        }

        //  sobrecarga del metodo constructor
        Persona(string _ife)  // METODO CONSTRUCTOR 2
        {
            ife = _ife;
        }

        void Correr();
        void Correr(int km);
};