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
void eliminarElemento();
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

	for(;;)
	{
		showMenu();
		std::cin >> option;
		if(option == 0) break;
		switch(option)
		{
			//
			case 1:
				//
				std::cout << "Digite el elemento a insertar: ", std::cin >> n;
				insertarElemento(frente, fin, n);
				break;
			case 2:
				//
				break;
			case 3:
				//
				break;
		}
	}

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

void eliminarElemento()
{
	//
}

void showMenu()
{
	//
	std::cout << "----COLA[QUEUE]----" << std::endl;
	std::cout << "1. Agregar elemento" << std::endl;
	std::cout << "2. Eliminar elemento" << std::endl;
	std::cout << "3. Mostrar el queue" << std::endl;
	std::cout << "0. Salir" << std::endl;
	std::cout << "Digitar opción: " << std::endl;
}