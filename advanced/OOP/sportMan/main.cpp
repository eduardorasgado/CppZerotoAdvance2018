/*
 * Crear:
 * a) alumnoJuan y alumnoPedro -> Alumno
 * b) deporLuis -> Deportista
 * c) bdAna y bdCarmen -> BecadoDeportista
 *
 * Metodos:
 *  d) mostrarDatos de todos los objetos
 * e) Actualizar nombre de carrara que estudia Alumno
 * f) Actualizar nombre ded Entrenador de Deportista y becado
 * g) Actualizar monto de la beca de bdAna y bdCarmen, este dato
 *    va a ser el porcentaje del incremento
 * */

#include <iostream>
#include "Alumno/Alumno.h"
#include "Deportista/Deportista.h"
#include "BecadoDeporte/BecadoDeporte.h"

using namespace People;

int main() {
    Alumno* alumnoJuan = new Alumno("Ingeniería Eléctrica");
    Alumno* alumnoPedro = new Alumno("Ingeniería Mecánica");

    Deportista* deporLuis = new Deportista("Mathew");

    BecadoDeporte* bdAna = new BecadoDeporte("Ingeniería Electrónica", "Mathews", 2000);
    BecadoDeporte* bdCarmen = new BecadoDeporte("Ingeniería Industrial", "Tiburcious", 1800);

    alumnoJuan->mostrarDatos();

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;

    return 0;
}