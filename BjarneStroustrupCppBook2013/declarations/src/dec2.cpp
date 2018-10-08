#include <iostream>

template <class TYPE>
void printIt(TYPE);

constexpr int square(int);

int main(void)
{
	const int newVar1 {80};
		int newVar2 {4};

	// constantes expr -> Se evaluan en el compilador
	// si no es constante en toda la funcion, el programa falla al compilar
	constexpr double newVar3 {1.4986896};

	const int d {4};
	const double newVar4 {1.45 * square(d)};

	// printing
	printIt(newVar1);
	printIt(newVar2);
	printIt(newVar3);
	printIt(newVar4);

	return 0;
}

template <class TYPE>
void printIt(TYPE var)
{
	std::cout << "Vr: " << var << std::endl;
}

constexpr int square(int d)
{
	return d * d;
}