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
#include <memory>

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

void showList(Nodo *lista);

void buscarElemento(Nodo*);

void eliminarElemento(Nodo *&);

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

	//while(lista != NULL)
	//{
		// eliminar primero los nodos internos de la lista
	//	std::cout << "Se ha eliminado el nodo con el dato: "<< lista->dato << std::endl;
	//	delete lista;
	//	lista = lista->siguiente;
	//}
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
			if(lista == NULL) std::cout << "La lista está vacía."<< std::endl;
			else showList(lista);
			break;
		case 3:
			// busqueda
			if(lista != NULL) buscarElemento(lista);
			else std::cout << "La lista está vacía." << std::endl;
			break;
		case 4:
			// eliminacion
			if(lista != NULL) eliminarElemento(lista);
			else std::cout << "La lista está vacía" << std::endl;
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

	// creamos dos auxiliares
	Nodo *aux1 = lista;
	Nodo *aux2;

	// mietras que la lista no hay llegado a su fin y
	// si los elementos vienen en orden
	while((aux1 != NULL)&&(aux1->dato < valor))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	// si el nodo va al principio
	if(lista == aux1)
	{
		lista = nuevo_nodo;
	}
	else
	{
		aux2->siguiente = nuevo_nodo;
	}
	// se ejecuta si o si
	nuevo_nodo->siguiente = aux1;

	std::cout << "El elemento " << valor << " ha sido insertado en la lista." << std::endl;
}

void showList(Nodo *lista)
{
	std::cout << "----La lista es: ----" << std::endl;
	// como no queremos modificar la lista, pasamos la llista como puntero
	// creamos un nnuevo nodo llamado actual
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual != NULL)
	{
		std::cout << actual->dato << " ";
		// el nodo actual va a ser ahora el nodo anterior
		actual = actual->siguiente;
	}
	delete actual;
	std::cout << std::endl;
}

//template <typename T> 
void buscarElemento(Nodo* lista)
{
	// creando un elemento para buscar
	int element;
	std::cout << "Ingrese el elemento a buscar: ",std::cin >> element;

	//auto *actual = std::make_shared<Nodo>;
	auto *actual = new Nodo();
	actual = lista;
	// iterar en la lista para llevar a cabo la busqueda
	int timesAppeared =0; // Un acumulador de las veces que element aparece en la lista
	while(actual != NULL)
	{
		if(element == actual->dato)
		{
			// si se encuentra el elemento buscado
			std::cout << "El elemento " << element << " ha sido encontrado" << std::endl;
			timesAppeared++;
		}
		// vamos hacia un nodo anidado con anterioridad
		actual = actual->siguiente;
	}
	std::cout << "El elemento " << element << " aparece " << timesAppeared << " veces en la lista" << std::endl;
	// borrando el nodo, evitaremos fugas
	delete actual;
	// con make_shared no nos preocupamos de fugas de memoria
}

//template <typename T>
void eliminarElemento(Nodo *&lista)
{
	// pedir al usuario el elemento a eliminar
	int element;
	std::cout << "Elemento a eliminar: ",  std::cin >> element;
	
	// creamos unos nodos auxiliares
	Nodo *aux_borrar = nullptr;
	Nodo *aux_anterior  = nullptr;

	aux_borrar = lista;
	while((aux_borrar != NULL)&& (aux_borrar->dato != element))
	{
		aux_anterior = aux_borrar;
		// recorrer la lista en busca del numero a borrar
		aux_borrar = aux_borrar->siguiente;
	}
	// Si no se encuentra nada
	if(aux_borrar == NULL) std::cout << "No existe el elemento en la lista" << std::endl;
	// en el caso en el que el elemento que queremos eliminar sea el primer elemento de la lista
	else if(aux_anterior == NULL)
	{
		lista = lista->siguiente;
		delete aux_borrar;
	}
	else
	{
		// borrar dato dentro de la lista real
		//anterior apuntara a lo siguiente y el nodo siguuiente se va a eliminar
		aux_anterior->siguiente = aux_borrar->siguiente;
		delete aux_borrar;
		std::cout << "El elemento ha sido eliminado: " << element << std::endl;
	}
}