#include <iostream>

using namespace std;

template <class TYPED>
void despliegue(TYPED argumento);

int main(int argc, char** argv)
{
	int arg0 = 15;
	double arg1 = 1124.4564;
	float arg2 = 15.56;
	char arg3 = 'b';

	despliegue(arg0);
	despliegue(arg1);
	despliegue(arg2);
	despliegue(arg3);

	return 0;
}

template <class TYPED>
void despliegue(TYPED argumento)
{
	cout << "El argumento unico es: " << argumento << endl;
}
