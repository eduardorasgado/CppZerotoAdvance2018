#include <iostream>
#include "EjemploPlantilla.h"

int main() {
    /* Creando objetos de una clase plantilla
     * clase <tipo_De_Dato1, tipo_De_dato2, ...> nombre(param1, param2,...)
     *
     * dinamicamente:
     * clase<tipo_De_Dato1, tipo_De_Dato2,...> *objeto = new clase<tiopo_de_dato, tipo_de_dato2,...>(param1, param2, ...);
     * */

    //objeto de clase plantilla estatico
    EjemploPlantilla<int, float> miObjeto(8, 4.332);
    miObjeto.mostrarDatos();

    //Ejemplo de clase plantilla dinamico
    EjemploPlantilla<float, double> *miObjeto2 = new EjemploPlantilla<float, double>(4.2, 23643454);
    miObjeto2->mostrarDatos();

    // normalmente es:
    // Class* objeto = new Class(param)
    return 0;
}