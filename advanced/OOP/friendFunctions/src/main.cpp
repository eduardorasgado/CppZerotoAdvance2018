//FUNCIONES AMIGAS
/*
* Funciones externas a una clase capaces de acceder a los miembros
* protegidos de una clase
*/
#include <iostream>
#include "Personaje.hpp"

using namespace std;

void modifyng(Personaje&, int, int);

int main(void)
{
	Personaje* pPrincipal = new Personaje(100, 90);
	pPrincipal->mostrarDatos();
	return 0;
}

// FRIEND FUNCTION
void modifying(Personaje& p, int attack, int defense)
{
	p.attack = attack;
	p.defense = defense;
}