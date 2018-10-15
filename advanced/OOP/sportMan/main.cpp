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

void printingGeneralData(Alumno*, Alumno*,Deportista*,
                        BecadoDeporte*, BecadoDeporte*);
void updateStudentCareer(Alumno*, Alumno*);

int main() {
    Alumno* alumnoJuan = new Alumno("Ingeniería Eléctrica", "Juan");
    Alumno* alumnoPedro = new Alumno("Ingeniería Mecánica", "Pedro");

    Deportista* deporLuis = new Deportista("Mathew", "Luis");

    BecadoDeporte* bdAna = new BecadoDeporte("Ingeniería Electrónica", "Mathews", 2000, "Ana");
    BecadoDeporte* bdCarmen = new BecadoDeporte("Ingeniería Industrial", "Tiburcious", 1800, "Carmen");

    // mostrando todos los datos
    printingGeneralData(alumnoJuan, alumnoPedro, deporLuis, bdAna, bdCarmen);
    std::cout << std::endl;

    //Actualizando la carrera de dos alumnos
    updateStudentCareer(alumnoPedro, alumnoJuan);

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;

    return 0;
}

void printingGeneralData(Alumno* alumnoJuan, Alumno* alumnoPedro,
        Deportista* deporLuis, BecadoDeporte* bdAna,
        BecadoDeporte* bdCarmen)
        // esta funciion imprimira mostrarDatos de todas las
        //instancias creadas
{
    alumnoJuan->mostrarDatos();
    std::cout << std::endl;
    alumnoPedro->mostrarDatos();
    std::cout << std::endl;
    deporLuis->mostrarDatos();
    std::cout << std::endl;
    bdAna->mostrarDatos();
    std::cout << std::endl;
    bdCarmen->mostrarDatos();
}

void updateStudentCareer(Alumno* a1, Alumno* a2)
{
    std::string newCareer;
    Alumno* alumnos[] = {a1, a2};

    for (int i = 0; i < 2; ++i)
    {
        // Mostrando datos iniciales del alumno
        std::cout << "Nombre Alumno: " << alumnos[i]->getNombre();
        std::cout << std::endl;
        std::cout << "Carrera: " << alumnos[i]->getNombreCarrera();
        std::cout << std::endl;

        // Actualizando el nombre de la carrera
        std::cout<< "Introduzca la nueva carrera: ";
        std::cin >> newCareer;
        alumnos[i]->setNombreCarrera(newCareer);

        //mostrando la carrera ya actualizada
        std::cout << "Nueva Carrera: " << alumnos[i]->getNombreCarrera();
        std::cout << "\nsss" << std::endl;
    }

}