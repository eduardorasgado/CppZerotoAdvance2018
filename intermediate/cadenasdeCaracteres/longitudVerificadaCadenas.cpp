#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cadena[] = "Esta es una cadena y es muy larga";
	// char cadena[] = "cortita";
	(strlen(cadena) >10) ? cout << cadena : cout << ""; cout << endl;

	return 0;
}
