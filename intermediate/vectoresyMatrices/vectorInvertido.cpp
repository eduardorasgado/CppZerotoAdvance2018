#include <iostream>

using namespace std;

int main(){
    // vector invertido
    int vectorHere[5] = {1,2,3,4,5};
    // imprimiendo los datos en orden inverso
    for(int i = 4; i >=0; i--){
        cout << "vectorData: " << vectorHere[i] << endl;
    }
    return 0;
}
