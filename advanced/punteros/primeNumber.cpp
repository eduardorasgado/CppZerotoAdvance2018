#include <iostream>

using namespace std;

void dataRequest(int&);
void primeNumber(int*);

int main()
{
    int num, *dir_num;

    dataRequest(num);

    dir_num = &num;

    primeNumber(dir_num);

    return 0;
}

void dataRequest(int& num)
{
    bool accepted = false;
    while (accepted == 0)
    {
        cout << "Inserte su número: ", cin >> num;
        cout << endl;
        if(num > 0) break;
    }
}

void primeNumber(int *num)
{
    bool isPrime = true;
    for(int i = 2;i <= (*num/2);i++) if(*num%i==0) isPrime = false;
    // en caso de ser 1
    if(*num == 1) isPrime = false;

    cout << "El número " << *num << " ";
    (isPrime == true) ? cout << " es primo" :
                        cout << "NO es primo";
    cout << endl;

    cout << "El espacio de memoria es: " << num << endl;
}