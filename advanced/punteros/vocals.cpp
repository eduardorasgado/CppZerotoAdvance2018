#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void nameRequest();
int findVowels(char v[]);

//GLOBALES
char *name;

int main()
{
	char vowels[] = {'a','e','i','o','u'};

	// devolver numero de vocales
	nameRequest();

	int hm = findVowels(vowels);

	cout << "Numero de vocales en tu nombre: " << hm << endl;
	return 0;
}

void nameRequest()
{
	//int N;
	//cout << "de cuantas letras es tu nombre? ", cin >> N;
	//cin.ignore(N);

	// creando el arreglo
	name = new char[60];

	cout << "cual es tu nombre: ";
	cin.getline(name, 30, '\n');

	cout << "tu eres " << name << "?" << endl;
}

int findVowels(char v[])
{
	int howMany = 0;
	int length = strlen(name);
	cout << "longitud de tu nombre: " << length << endl;
	for(int i = 0;i < length;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			if(name[i] == v[j])
			{
				howMany++;
			}
		}
	}
	return howMany;
}
