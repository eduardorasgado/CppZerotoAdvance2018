/*
* LINKED LIST
* Tipos:
*
* Listas Simplemente enlazada
* 		-Un solo enlace que apunta al siguiente nodo
* Lista Doblemente enlazada
* 		-Cada nodo contiene dos enlaces, uno a su nodo predecesor y otro a su nodo sucesor
* Lista Circular Simplemente enlazada
		-El ultimo elemento se enlaza al ultimo elemento
* Lista circular doblemente enlazada
* 		-El ultimmo elemento apunta al primer elemento, cada nodo tiene un enlace con su
*		 sucesor y su predecesor.
*/
#include <iostream>
#include <cstdlib>

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void showMenu();

// nodo de la lista, dato a guardar, la opcion deseada
template <typename T>
void takeActions(Nodo*&, T&, int);

template <typename T>
void insertarElemento(Nodo*&,T&, int);

int main()
{
	int option;
	int n;
	// Operaciones: Insercion, muestra, busqueda, eliminación
	Nodo *lista = nullptr;
	for(;;)
	{
		showMenu();
		std::cin >> option;
		if(option == 5) break;
		takeActions(lista, n, option);
	}

	delete lista;
	return 0;
}

void showMenu()
{
	std::cout << "\n---- MENU LISTAS ENLAZADAS[LINKED LISTS] ----" << std::endl;
	std::cout << "1. Insertar un elemento en la lista enlazada." << std::endl;
	std::cout << "2. Mostrar la lista enlazada" << std::endl;
	std::cout << "3. Buscar un elemento en la lista enlazada" << std::endl;
	std::cout << "4. Eliminar un elemento de la lista enlazada" << std::endl;
	std::cout << "5. Salir." << std::endl;
	std::cout << "Inserte su opción a elegir: " << std::endl;
}

template <typename T>
void takeActions(Nodo *& lista, T& valor, int option)
{
	//
	switch(option)
	{
		case 1:
			// insertar
			std::cout << "Ingrese el valor a insertar: ", std::cin >> valor;
			insertarElemento(lista, valor);
			break;
		case 2:
			// mostrar
			break;
		case 3:
			// busqueda
			break;
		case 4:
			// eliminacion
			break;
	}
}

/*
* Pasos para la insercion de elemento a la lista
* Son cuatro pasos:
* 1. Crear un nuevo nodo
* 2. Asignar a nuevo_nodo->dato el elemento que queremos incluir a la lista
* 3. Crear dos nodos auxiliares y asignar lista al primero de ellos
* 4. Insertar el elemento a la lista
*/
template <typename T>
void insertarElemento(Nodo *&lista, T& valor)
{
	// Operacion de insercion en listas
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = valor;

	Nodo *aux1 = new Nodo();
	Nodo *aux2 = new Nodo();

	std::cout << "El elemento " << valor << " ha sido insertado en la lista." << std::endl;
}