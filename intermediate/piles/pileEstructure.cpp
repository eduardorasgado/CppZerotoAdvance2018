/*
* PILAS
* Estructura de datos LIFO, Last Input First Output
* Es un como una pila de platos
* Cada elemento de la pila tiene un puntero que apunta hacia el elemento anterior
* el primer nodo o elemento va a tener un puntero NULL.
*
*/
#include <iostream>
#include <cstdlib>

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int n);
void sacarPila(Nodo *&, int &);
void showElement();
void showMenu();

int main()
{
	std::cout << "---ESTRUCTURA DE DATOS[PILA]---" << std::endl;
	int option = 0;
	int n1;
	// creando puntero de pila puntando a Nulo
	Nodo *pila = NULL;

	//ciclo del programa
	for(;;)
	{
		// mostrar el menu
		showMenu();
		std::cin >> option;
		// hacer algo con la opcion dada
		if(option > 0 && option < 5)
		{
			switch(option)
			{
				case 1:
					// agregar
					std::cout << "Digitar numero: ", std::cin >> n1;
					agregarPila(pila, n1);
					break;
				case 2:
					// popear
					if(pila != NULL) sacarPila(pila, n1);
					else std::cout << "La pila esta vacía." << std::endl;
					break;
				case 3:
					//popear toda la pila
					if(pila != NULL)
					{
						while(pila != NULL) sacarPila(pila, n1);
						std::cout << "Se han eliminado todos los elementos" << std::endl;
					}
					else std::cout << "La pila esta vacía." << std::endl;
				case 4:
					// mostrar
					std::cout << "Mostrando los elementos de la pila: " << std::endl;
					if(pila != NULL) while (pila != NULL) showElement();
					else std::cout << "La pila esta vacia." << std::endl;
					break;
			}
		}
		if(option == 5) break;
	}

	delete pila;	
	
	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	// memmoria reservada, crear un espacio en memoria para almacenar
	// un nodo
	Nodo *nuevo_nodo = new Nodo();
	// agregar el valor o dato, cargar el valor dentro del nodo
	nuevo_nodo->dato = n;
	// poner el puntero igualado a pila, cargamos el puntero pila dentro del nodo
	nuevo_nodo->siguiente = pila;
	// la pila sera el nuevo nodo, asignamos el nuevo nodo a pila
	pila = nuevo_nodo;
	std::cout << "Elemento " << n << "Agregado" << std::endl;
}

void sacarPila(Nodo *&pila, int &n)
{
	// con esto se salvan los datos anteriores en los
	// parametros pasados a la funcion
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
	std::cout << "El valor ha sido eliminado de la pila" << std::endl;
}

void showElement()
{
	//
}

void showMenu()
{
	std::cout << "1. agregar elemento a la pila." << std::endl;
	std::cout << "2. Popear elemento de la pila." << std::endl;
	std::cout << "3. Popear total la pila." << std::endl;
	std::cout << "4. Mostrar la pila." << std::endl;
	std::cout << "5. Salir." << std::endl;
	std::cout << "Inserte su elección: ";
}