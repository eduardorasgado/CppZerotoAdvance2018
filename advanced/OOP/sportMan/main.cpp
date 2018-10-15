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
    Alumno* alumnoJuan = new Alumno("Ingeniería Eléctrica", "Juan");
    Alumno* alumnoPedro = new Alumno("Ingeniería Mecánica", "Pedro");

    Deportista* deporLuis = new Deportista("Mathew", "Luis");

    BecadoDeporte* bdAna = new BecadoDeporte("Ingeniería Electrónica", "Mathews", 2000, "Ana");
    BecadoDeporte* bdCarmen = new BecadoDeporte("Ingeniería Industrial", "Tiburcious", 1800, "Carmen");

    // mostrando todos los datos
    alumnoJuan->mostrarDatos();
    std::cout << std::endl;
    alumnoPedro->mostrarDatos();
    std::cout << std::endl;
    deporLuis->mostrarDatos();
    std::cout << std::endl;
    bdAna->mostrarDatos();
    std::cout << std::endl;
    bdCarmen->mostrarDatos();

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;

    return 0;
}