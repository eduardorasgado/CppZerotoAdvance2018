/*
HACER LA SERIE DE FIBONACCI
1 1 2 3 5  8 13 ...

Author: Eduardo Rasgado Ruiz
*/
#include <iostream>

using namespace std;

int main(){
    int n, x = 0, y = 1, z = 1;
    cout << "Digitar el numero de elementos: " << endl;
    cin >> n;

    for(int i = 1; i < n; i++){
        if(i == 1){
            cout << 1 << "  ";
        }
        z = x + y;

        cout << z << "  ";
        x = y;
        y = z;
    }
    cout << "\n";
    return 0;
}
