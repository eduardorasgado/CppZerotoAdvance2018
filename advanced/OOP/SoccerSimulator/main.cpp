#include <iostream>
#include <cstdlib>
#include "Futbolista/Futbolista.h"

using namespace Soccer;

void printMenu(int&);

int main() {
    Futbolista* f1 = new Futbolista("Teodoro", "Martz", 29, 11, "Delantero");
    int option;
    // Ciclo principal del programa
    for(;;)
    {
        printMenu(option);
        // En caso de presionar cero en el menu, salir
        if(option == 0) break;
        //f1->viajar();
        switch(option)
        {
            case 1:
                //
                break;
            case 2:
                //
                break;
            case 3:
                //
                break;
            case 4:
                //
                break;
            case 5:
                //
                break;
            case 6:
                //
                break;
        }
    }

    delete f1;

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