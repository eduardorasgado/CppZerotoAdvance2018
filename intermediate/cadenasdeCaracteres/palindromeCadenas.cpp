#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	string word = "reconocer";
	//string word = "eduardo";
	string originalWord = word;
	reverse(word.begin(), word.end());
	(word == originalWord) ? cout << "La palabra es palindroma" : cout << "No es una palindroma";
	cout << endl;
	return 0;
}
