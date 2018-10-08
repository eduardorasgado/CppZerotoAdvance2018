#include <iostream>
#include <cmath>

template <class TYPED>
void printThat(TYPED);

int main(void)
{
	double myVar = 5.678;
	double myVar2 {54.33331};

	printThat(myVar);
	printThat(myVar2);

	// AUTO: permite incertidumbre en el tipo de dato que va
	// a guardar
	// puede conbinarse bien con template
	auto myVar3 = sqrt(81);

	printThat(myVar3);

	return 0;
}

template <class TYPED>
void printThat(TYPED myVar)
{
	std::cout << "My var: " << myVar << std::endl;
}