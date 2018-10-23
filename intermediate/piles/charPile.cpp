/*
* Insertar un caracter a la pila
* Mostrar todos los elementos de la pila
* Eliminar el ultimo elemento
* Salir
*/
#include <iostream>
#include <cstdlib>

struct Node
{
	// la pila almacena caracteres
	char value;
	Node *next;
};

void insertElement(Node *&, int);
void applyActions(Node *&, int&, char&, Node *&);
void showMenu();
void showPile(Node *&);

int main()
{
	int option;
	// donde se guardara la cabeza de cada elemento
	char n;
	// El primer nodo debe ser un nodo null
	Node *pile = NULL;
	// el nodo auxiliar para poder mostrar todos los elementos de la pila
	// sin perder la cabeza de la pila
	Node *shower = NULL;
	// un ciclo para el menu
	for(;;)
	{
		showMenu();
		std::cin >> option;
		if(option == 4) break;
		applyActions(pile, option, n, shower);
	}

	// desalojando la memoria usada
	delete pile;
	delete shower;

	return 0;
}

void insertElement(Node *&next, char value)
{
	// creando un nuevo objeto de la estructura nodo
	// dinamicamente alojado
	Node *new_pile = new Node();
	// reasignando los valores dados para el siguiente nodo a
	// la cabeza de la pila
	new_pile->value = value;
	// el viejo nodo o el nodo de abajo sera el nodo interno del nuevo nodo
	new_pile->next = next;
	// ahora el nodo nuevo toma lugar al ser asignado al puntero
	next = new_pile;
	std::cout << "El elemento " << value << " ha sido agregado a la pila" << std::endl;
}

void applyActions(Node *&pile, int& option, char &n, Node *&shower)
{
	//aplicar la seleccion del usuario
	switch(option)
	{
		case 1:
			//insertar
			std::cout << "Su elemento a insertar: ", std::cin >> n;
			insertElement(pile, n);
			break;
		case 2:
			//eliminar
			break;
		case 3:
			// mostrar
			// creando una copia segura de la pila, para no afectarla
			shower = pile;
			showPile(shower);
			break;
	}
}

void showPile(Node *&shower)
{
	while(shower!= NULL)
	{
		// mostrando el valor del nodo actual
		std::cout << shower->value << " ";
		// se reasigna el nodo interno(next) al nodo actual de la copia
		shower = shower->next;
	}
	std::cout << std::endl;
}

void showMenu()
{
	std::cout << "\n1. Insertar un caracter a la pila." << std::endl;
	std::cout << "2. Eliminar un elemento de la pila." << std::endl;
	std::cout << "3. Mostrar todos los elementos de la pila." << std::endl;
	std::cout << "4. Salir." << std::endl;
	std::cout << "Digite su opción: ";
}