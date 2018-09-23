#include <iostream>

using namespace std;

template <class TYPED>
void despliegue(TYPED argumento);

int main(int argc, char** argv)
{
	double arg = 124.4564;

	despliegue(arg);

	return 0;
}

template <class TYPED>
void despliegue(TYPED argumento)
{
	cout << "El argumento unico es: " << argumento << endl;
}
