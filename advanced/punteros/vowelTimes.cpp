#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void requestString();
void stringCalculate();
void showResults();

char *word;
int *c;
char *vls;
int main()
{
	// A E I O U
	int ct[] = {0,0,0,0,0};
	char vowels[] = {'A','E','I','O','U'};
	
	c = ct;
	vls = vowels;

	requestString();
	stringCalculate();
	showResults();
	
	return 0;
}

void requestString()
{
	word = new char[60];
	// peticion de datos a los usuarios
	cout << "Por favor introduce una cadena: ", cin.getline(word,60,'\n');
	cout << "Introdujiste: " << word << endl;
}

void stringCalculate()
{
	int L = strlen(word);
	
	for(int i = 0;i < L;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			if(toupper(*(word+i)) == vls[j])
			{
				c[j]++;
			}
		}
	}
}

void showResults()
{
	cout << "====RESULTADOS====" << endl;
	for(int i = 0;i < 5;i++) cout << vls[i] << ": " << c[i] << endl;
}