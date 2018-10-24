/*
*COLAS
* FIFO: First Input First Output
* Este tipo de estructuras se caracteriza por que
* en ella l aoperacion de insercion se realiza por
* un extremo y la extraccion por el otro lado
**/
#include <iostream>
#include <cstdlib>


struct Nodo
{
	int dato;
	Nodo *siguiente;
};

bool colaVacia(Nodo *);
void insertarElemento(Nodo *&, Nodo *&, int);
void eliminarElemento(Nodo *&, Nodo *&, int&);
void showQueue(Nodo *&);
void showMenu();

int main()
{
	// para la seleccion dentro del menu
	int option;
	// dato que guardara el valor del dato del nodo
	int n;
	// creando los nodos que van a servir para
	// ubicar y actualizar el frente y el fin de la cola
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	// Este nodo sirve para crear una copia del nnodo frente y poder
	// mostrar toda la cola
	Nodo *shower = NULL;

	for(;;)
	{
		showMenu();
		std::cin >> option;
		if(option == 0) break;
		switch(option)
		{
			//acciones del menu
			case 1:
				// insercion de elemento dentro de la cola
				std::cout << "Digite el elemento a insertar: ", std::cin >> n;
				insertarElemento(frente, fin, n);
				break;
			case 2:
				// Eliminacion de un elemento dentro de la cola
				if(frente == NULL) std::cout << "La cola está vacía" << std::endl;
				else eliminarElemento(frente, fin, n);
				break;
			case 3:
				// Mostrar los elementos de la cola
				// hacemos una copia del apuntador de nuestra cola
				if (frente == NULL) std::cout << "La cola está vacía" << std::endl;
				else
				{
					// mostrar el nodo
					shower = frente;
					showQueue(shower);
				}
				break;
		}
	}

	//	*** fugas de memmoria
	delete shower;
	delete frente;
	delete fin;

	return 0;
}

bool colaVacia(Nodo *frente) {return (frente == NULL) ? true : false;}

// Recordar que una cola tiene un frente y un fin, el dato nuevo
// entra por la cola y el dato que sale lo hace por el frente
void insertarElemento(Nodo *&frente, Nodo *&fin, int n)
{
	// creamos un nuevo nodo
	Nodo *nuevo_nodo = new Nodo();
	// asignamos los valores al nodo
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	// en caso de que nuestra cola este vacia
	if(colaVacia(frente)) frente = nuevo_nodo;
	else fin->siguiente = nuevo_nodo;
	fin = nuevo_nodo;
	std::cout << "El elemento " << n << " ha sido insertado con exito en la cola" << std::endl;
}

void eliminarElemento(Nodo *&frente, Nodo *&fin, int& n)
{
	n = frente->dato;
	//obtenemos el valor del ndo
	// Creamos un nodo auxiliar y le asignamos el frente de la cola
	Nodo *aux = new Nodo();
	//
	aux->dato =  n;
	aux->siguiente = frente->siguiente;
	// si solo existen un elemento en la cola
	if(frente->siguiente == NULL) frente = fin = NULL;
	// en caso que exista mas de un elemento dentro de la cola
	else frente = frente->siguiente;
	// Eliminamos el nodo del frente de la cola
	delete aux;

	std::cout << "El elemento " << n << " ha sido eliminado de la cola." << std::endl;
}

void showQueue(Nodo *& shower)
{
	std::cout << "Mostrando la COLA: " << std::endl;
	// ir recorriendo en reversa la pila y mostrando el valor de cada nodo interno
	while(shower != NULL)
	{
		std::cout << shower->dato << " ";
		shower = shower->siguiente;
	}
	std::cout << std::endl;
}

void showMenu()
{
	//
	std::cout << "\n----COLA[QUEUE]----" << std::endl;
	std::cout << "1. Agregar elemento" << std::endl;
	std::cout << "2. Eliminar elemento" << std::endl;
	std::cout << "3. Mostrar el queue" << std::endl;
	std::cout << "0. Salir" << std::endl;
	std::cout << "Digitar opción: " << std::endl;
}