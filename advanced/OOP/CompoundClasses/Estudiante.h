//
// Created by cheetos on 3/10/18.
//
//IIMPORTAMOS LAS CLASES QUE COMPONDRAN A ESTA
#include "Expediente.h"
#include "Direccion.h"

#include <iostream>

using namespace std;

// UNA CLASE COMPUESTA ES AQUELLA QUE ENTRE SUS
// ATRIBUTOS TIENE OBJETOS DE OTRAS CLASES
class Estudiante
{
    private:
        string matricula;
        float promedio;
        // clases dentro de esta clase
        Expediente exp;
        Direccion dir;

    public:
        // CONSTRUCTOR DE CLASE COMPUESTA
        // NOTESE EL :
        Estudiante(string matricula, float promedio,
                   int numExpediente, string direccion)
                   : exp(numExpediente), dir(direccion)
        {
            this->matricula = matricula;
            this->promedio = promedio;
        }

        ~Estudiante()
        {
            // Destructor del elemento
        }

        void showData();
};