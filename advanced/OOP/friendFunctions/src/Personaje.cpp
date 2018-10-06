#include "Personaje.h"
#include <iostream>

void Personaje::mostrarDatos()
{
	std::cout << "Attack: " << this->attack << std::endl;
	std::cout << "Defense: " << this->defense << std::endl;
}