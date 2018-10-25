#include <iostream>
#include <cstdlib>

class Vector
{
	public:
		// constructor of the class vector
		Vector(int s): elem{new double[s]},sz{s}{}
		~Vector() { } // destructor of the vector class
		// element access by subscripting
		double& operator[](int i) { return this->elem[i]; }
		int size(){return this->sz;}
		void show(){for(int i = 0;i < this->sz;++i) std::cout << elem[i] << std::endl;}
		
	private:
		// pointer to elements
		double *elem;
		int sz;	
};

void valuesToVector(Vector);

int main()
{
	// Creating the vector statically
	Vector thisVector(6);
	// adding values to custom vector
	valuesToVector(thisVector);

	// showing values inside this vector
	thisVector.show();
	
	// printing manually by accesing to 
	// the vector function operator[]
	for(int i = 0;i < thisVector.size();++i)
	{
		std::cout << thisVector[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}

void valuesToVector(Vector v)
{
	//
	auto N = v.size();
	std::cout << "Length is: " << N << std::endl;

	for(int i = 0;i < N;++i)
	{
		//
		v[i] = i;
	}
}