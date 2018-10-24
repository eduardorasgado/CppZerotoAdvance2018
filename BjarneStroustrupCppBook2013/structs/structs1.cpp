#include <iostream>
#include <memory>
#include <cstdlib>

struct Telefonica
{
	std::string name;
	int register_num;
	double *someNumList;	
};

struct Phone
{
	std::string marca;
	int area;
	std::string* modelos;
	struct Telefonica phone_vendor;
};

void createPhone();
void init_phone(Phone&);
void init_telefonica(Phone&);

int main()
{
	createPhone();
	
	return 0;
}

void createPhone()
{
	// Creando un Phone
	std::cout << "Creando un telefono" << std::endl;
	Phone p1;
	init_phone(p1);
}

void init_phone(Phone& p)
{
	//
	std::cout << "Inicializandolo." << std::endl;
	p.marca = "ZTE";
	p.area = 133;
	p.modelos = new std::string[5];
	p.modelos[0] = "B1";
	p.modelos[1] = "B2";
	p.modelos[2] = "B3";
	p.modelos[3] = "B4";
	p.modelos[4] = "B5";

	// inicializando la estructura anidada
	init_telefonica(p);
}

void init_telefonica(Phone& p)
{
	//
	std::cout << "Inicializando la estructura anidada" << std::endl;
	p.phone_vendor.name = "Virgin";
	p.phone_vendor.register_num = 5556;
	p.phone_vendor.someNumList = new double[100];
	for(int i = 0; i < 100;++i)
	{
		p.phone_vendor.someNumList[i] = (double) (i+0.5555);
	}
}