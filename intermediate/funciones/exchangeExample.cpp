#include <iostream>

using namespace std;

//prototipos
void cambio(int num, int&, int&, int&, int&, int&, int&);
void showMoney(int&, int&, int&, int&, int&, int&);

int main(int argc, char** argv)
{
	//
	int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
	int dollars;
	cout << "Inserte sus dolares: ", cin >> dollars;
	cout << "DOLARES: " << dollars << endl;

	// devolviendo los billetes
	cambio(dollars, cien, cincuenta, veinte, diez, cinco, uno);

	// imprimiendo...
	showMoney(cien, cincuenta, veinte, diez, cinco, uno);

	return 0;
}

void cambio(int dollars, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
	// cout << "=====Convirtiendo sus dolares====" << endl;
	cien = dollars / 100;
	cincuenta = (dollars - (cien* 100)) / 50;
	veinte = (dollars - (cien*100) - (cincuenta*50)) / 20;
	diez = (dollars - (cien*100) - (cincuenta*50) - (veinte*20)) / 10;
	cinco = (dollars - (cien*100) - (cincuenta*50) - (veinte*20) - (diez*10)) / 5;
	uno = dollars - (cien*100) - (cincuenta*50) - (veinte*20) - (diez*10) - (cinco*5);

}

void showMoney(int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
	cout << "====BILLETES====" << endl;
	cout << "Cien: " << cien << endl;
	cout << "Cincueta: " << cincuenta << endl;
	cout << "Veinte: " << veinte << endl;
	cout << "Diez: " << diez << endl;
	cout << "Cinco: " << cinco << endl;
	cout << "Uno: " << uno << endl;
}
