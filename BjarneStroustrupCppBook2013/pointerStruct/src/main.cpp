#include <iostream>

using namespace std;

struct Vector
{
	int size;
	double* element;  // pointer to element
};

void vector_init(Vector&, int s);

double read_and_sum(int s);

int main(void)
{
	// Vector v;
	int N;
	cout << "N: ", cin >> N;
	int sum = read_and_sum(N);
	cout << "Suma: " << sum << endl;

	return 0;
}

void vector_init(Vector& v, int s)
{
	v.element = new double[s];
	v.size = s;
}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v, s);
	for(int i =0;i!=s;i++) cout << "reading v[" << i <<"]: ", cin >> v.element[i];

	double sum = 0;
	for(int i = 0;i!=s;i++)
		sum+=v.element[i];

	return sum;
}