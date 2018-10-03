#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {
    Estudiante* eduardo = new Estudiante("16190278", 8.5, 5421, "Calle Faisano");
    eduardo->showData();

    delete eduardo;

    return 0;
}