#include <iostream>
#include <cstdlib>
#include "Futbolista/Futbolista.h"
#include "Entrenador/Entrenador.h"
#include "Medico/Medico.h"

using namespace Soccer;

void printMenu(int&);
void optionFinder(int&);
void teamFlight();
void teamTraining();
void teamMatch();
void planTheGame();
void interviewSession();
void healingProcedure();

// variables globales
// Creamos el arreglo
Persona* equipo[4]; // Un arreglo de 4 objetos basada en la clase abstracta

int main() {
    // Instanciamos los objetos
    equipo[0] = new Futbolista("Teodoro", "Martz", 29, 11, "Delantero");
    equipo[1] = new Futbolista("Paulo", "Perez", 24, 10, "Portero");
    equipo[2]  = new Entrenador("Tuca", "Ferreti", 53, "Defensiva");
    equipo[3] = new Medico("Zebino", "Sobretti", 47, "Cardiologo", 16);

    int option;
    // Ciclo principal del programa
    for(;;)
    {
        printMenu(option);
        // En caso de presionar cero en el menu, salir
        if(option == 0) break;
        //f1->viajar();
        optionFinder(option);
    }
    return 0;
}

void printMenu(int& option)
{
    int kg = true; // keep going
    // Ciclo de validacion de los limites permitidos dadas las
    // opciones
    while(kg)
    {
        std::cout << "===SOCCER SIMULATOR===" << std::endl;
        std::cout << "1. Viaje en equipo" << std::endl;
        std::cout << "2. Entrenamiento" << std::endl;
        std::cout << "3. Partido de futbol" << std::endl;
        std::cout << "4. Planificar el entrenamiento" << std::endl;
        std::cout << "5. Entrevista" << std::endl;
        std::cout << "6. Curar lesión" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Su opción: " << std::endl;
        std::cin >> option;
        // si se escoje una opcion simplemente se sale del ciclo
        if(option >= 0 && option < 7) kg = false;
    }
}

void optionFinder(int& option)
{
    switch(option)
    {
        case 1:
            //Vuelo
            teamFlight();
            std::cout << std::endl;
            break;
        case 2:
            //Entrenamiento
            teamTraining();
            std::cout << std::endl;
            break;
        case 3:
            //Partido de fut
            teamMatch();
            std::cout << std::endl;
            break;
        case 4:
            // Planificar un partido
            planTheGame();
            std::cout << std::endl;
            break;
        case 5:
            // Sesion de entrevista
            interviewSession();
            std::cout << std::endl;
            break;
        case 6:
            // Chequeo medico
            healingProcedure();
            std::cout << std::endl;
            break;
    }
}

void teamFlight()
{
    std::cout << "------Viaje------" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido();
        std::cout << " -> ";
        equipo[i]->viajar();
        std::cout << std::endl;
    }
}

void teamTraining()
{
    std::cout << "------Entrenamiento-------" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido();
        std::cout << " -> ";
        equipo[i]->entrenamiento();
        std::cout << std::endl;
    }
}

void teamMatch()
{
    std::cout << "------Partido-------" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido();
        std::cout << " -> ";
        equipo[i]->partido();
        std::cout << std::endl;
    }
}
void planTheGame()
{
    std::cout << "------Planficar un juego-------" << std::endl;
    // UPCASTING y DOWN CASTING
    /*
     *C++ allows that a derived class pointer (or reference) to be
     * treated as base class pointer. This is upcasting.
     *
     * Downcasting is an opposite process, which consists in
     * converting base class pointer (or reference) to derived
     * class pointer.
     * Upcasting and downcasting should NOT be understood as a
     * simple casting of different data types.
     *
     * https://www.tutorialcup.com/cplusplus/upcasting-downcasting.htm
     *
     * Down casting:
     * */
    ((Entrenador*) equipo[2])->planificarEntrenamiento();

}

void interviewSession()
{
    std::cout << "------Entrevista-------" << std::endl;
    for (int i = 0; i < 2; ++i)
    {
        std::cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido();
        std::cout << std::endl;
        // Downcasting de clase persona(base) a clase futbolista
        ((Futbolista*)equipo[i])->entrevista();
    }
}

void healingProcedure()
{
    std::cout << "------Chequeo médico-------" << std::endl;
    int i = (sizeof(equipo)/sizeof(*equipo)-1);
    std::cout << "El médico " << equipo[3]->getNombre() << " está aquí." << std::endl;
    ((Medico*)equipo[i])->curarLesion();
}
