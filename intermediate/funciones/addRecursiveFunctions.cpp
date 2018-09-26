#include <iostream>

using namespace std;

//prototipo
int recursividad(int n);
int dataRequest();

int main(int argc, char** argv)
{
    // suma recursiva de los primeros n numeros positivos
    int n = dataRequest();
    int addition = recursividad(n);
    cout << "La suma recursiva es: " << addition << endl;
    return 0;
}

int recursividad(int n)
{
    if(n == 1) return 1;
    return n + recursividad(n-1);
}

int dataRequest()
{
    int n;
    bool accepted = false;

    while(accepted == false)
    {
        cout << "Número de su recursividad mayor a cero: ";
        cin >> n;
        if(n > 0) break;
    }
    return n;
}