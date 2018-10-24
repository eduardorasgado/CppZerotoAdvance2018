/*
* COLA EN UN BANCO[APLICACION DE COLAS]
* guardar los datos de clientes y almacenarlos en una cola
** Mostrar a los clientes en el orden correcto
**/

#include <iostream>
#include <cstdlib>

// Nodo que contendra nodos para soportar una cola
struct Node
{
	// la cola va a contener caracteres
	int turn;
	std::string name;
	// valor que guarda el nodo que le precede
	Node *next_node;
};

void showMenu();
// nodo frente, nodo fin, nodo shower(copia que permite mostrar el contenido de la pila)
// caracter que guarda el caracter a insertar y a borrar, opcion por el usuario
void takeActions(Node *&, Node *&, Node *&, std::string&, int&, int&);
void insertNode(Node *&, Node *&, std::string&, int&);
bool isEmpty(Node *);
void deleteNode(Node *&, Node *&, std::string&, int&);
// solo toma como parametro la copia del nodo front
void showQueue(Node *&);

int main()
{
	// seleccion del usuario
	int option, turn = 0;
	// valor que contendra y recordara el ultimo elemento frontal
	std::string name;
	// Comenzamos iniciando dos nodos como nulos, un tercero es para mostrar la cola
	Node *front = NULL;
	Node *end = NULL;
	Node *shower = NULL;

	// ciclo que sigue si el usuario asi lo decide
	for(;;)
	{
		// imprimiendo las opciones para el usuario
		showMenu();
		// tomando la opcion captada por el teclado
		std::cin >> option;
		// salir
		if(option == 0) break;
		// llamar a la funcion que va a ejecutar las acciones
		// y le pasamos las referencias
		takeActions(front, end, shower, name, turn, option);
	}

	while(front != NULL)
	{
		// eliminamos todos los nodos anidados dentro del nodo superior
		// con ello evitamos fugas de memmoria en el programa
		deleteNode(front, end, name, turn);
	}
	// limpiamos la memmoria
	delete front;
	delete end;
	delete shower;

	std::cout << "Programa terminado. " << std::endl;
	return 0;
}


void showMenu()
{
	std::cout << "\n--- COLA DE CARACTERES ----" << std::endl;
	std::cout << "1. Insertar cliente a la cola." << std::endl;
	std::cout << "2. Eliminar cliente de la cola." << std::endl;
	std::cout << "3. Sacar a todos los clientes." << std::endl;
	std::cout << "4. Mostrar clientes en cola." << std::endl;
	std::cout << "0. Salir." << std::endl;
	std::cout << "Digite su opción: " << std::endl;
}
// nodo frente, nodo fin, nodo shower(copia que permite mostrar el contenido de la pila)
// caracter que guarda el caracter a insertar y a borrar, opcion por el usuario
void takeActions(Node *&front, Node *&end, Node *&shower, std::string& name, int &turn, int &option)
{
	//
	switch(option)
	{
		case 1:
			//std::cout << "Inserte el turno: ", std::cin >> turn;
			turn++;
			std::cout << "Inserte el nombre: ", std::cin >> name;
			std::cin.ignore();
			// Insertar elemento
			insertNode(front, end, name, turn);
			break;
		case 2:
			// Eliminar un elemento
			if(front == NULL) std::cout << "La cola está vacía" << std::endl;
			else deleteNode(front, end, name, turn);
			break;
		case 3:
			// Vaciar la cola
			// para hacer una iteracion hasta que el nodo de en frente sea nulo
			if(front != NULL)
			{
				while(front != NULL) deleteNode(front, end, name, turn);
			}
			std::cout << "Se ha vaciado la cola." << std::endl;
			break;
		case 4:
			// MOstrar la cola
			// hacemos una copia del puntero frontal para no afectar al puntero original
			shower = front;
			if(shower==NULL) std::cout << "La cola está vacía." << std::endl;
			else showQueue(shower);
			break;
		default: std::cout << "Opcion Invalida" << std::endl;
	}
}

void insertNode(Node *&front, Node *&end, std::string& name, int& turn)
{
	// Creamos un nodo
	Node *new_node = new Node();
	// le asignamos valores
	new_node->turn = turn;
	new_node->name = name;
	new_node->next_node = NULL;

	// si la cola esta vacia asignamos a end y front como nulos
	if(isEmpty(front)) front = new_node;
	else end->next_node = new_node;

	// el nodo final sera entonces el nuevo nodo
	end = new_node;
	std::cout << "El cliente " << name << " ha sido agregado." << std::endl;
}

bool isEmpty(Node *front) {return (front == NULL) ? true : false;}

void deleteNode(Node *&front, Node *&end, std::string& name, int& turn)
{
	// el valor sera el valor anterior ahora
	name = front->name;
	//turn = front->turn;
	// creamos un nodo auxiliar
	Node *aux = new Node();
	// asignamos losvalores anteriores
	aux->name = name;
	aux->turn = turn;
	aux->next_node = front->next_node;

	// si solo hay un valor en la cola
	if(isEmpty(front->next_node)) front = end = NULL;
	// so hay mas valores en la cola
	else front = front->next_node;

	delete aux;
	std::cout << "El cliente " << name << " ha sido eliminado" << std::endl;
}


// solo toma como parametro la copia del nodo front
void showQueue(Node *&shower)
{
	std::cout << "Mostrando la cola: " << std::endl;
	//
	while(shower != NULL)
	{
		// imprimir el valor almacenado en el nodo
		std::cout << shower->turn << ": " << shower->name << " | ";
		// cambiamos al nodo interno
		shower = shower->next_node;
	}
	std::cout << std::endl;
}