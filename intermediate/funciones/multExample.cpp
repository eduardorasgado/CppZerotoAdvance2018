#include <iostream>

using namespace std;

//Prototipos de funcion
void dataRequest();
void dataMult(float x, float y);

// variables de tipo global
float num1, num2;

int main()
{
	// funcion principal
        dataRequest();
	dataMult(num1, num2);

        return 0;
}

void dataRequest()
{
        cout << "Digite 2 numeros: ", cin >> num1 >> num2;
}

void dataMult(float x, float y)
{
        cout << "La multiplicacion es: " << (x * y) << endl;
}



