#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char word[] = "Hola que tal?";
	int charLength = 0;
	charLength = strlen(word);
	cout << "Numero de caracteres de la cadena: " << charLength << endl;
	return 0;
}
