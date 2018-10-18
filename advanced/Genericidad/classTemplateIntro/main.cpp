#include <iostream>
#include "EjemploPlantilla.h"

int main() {
    /* Creando objetos de una clase plantilla
     * clase <tipo_De_Dato1, tipo_De_dato2, ...> nombre(param1, param2,...)
     * */
    EjemploPlantilla <int, float> miObjeto(8, 4.332);

    miObjeto.mostrarDatos();
    return 0;
}