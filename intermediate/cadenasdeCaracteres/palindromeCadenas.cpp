#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	//string word = "reconocer";
	string word;
	cout << "Escriba una palabra: ";
	getline(cin, word);
	string originalWord = word;
	reverse(word.begin(), word.end());
	cout << "Palabra: " << originalWord << endl;
	cout << "Palabra invertida: " << word << endl;
	(word == originalWord) ? cout << "La palabra es palindroma" : cout << "No es una palindroma";
	cout << endl;
	return 0;
}
