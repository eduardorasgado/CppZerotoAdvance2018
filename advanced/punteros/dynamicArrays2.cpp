#include <iostream>

using namespace std;


void dataRequest1(int&);
void dataRequest2(int&);
void showData(int&);

int *dir_arr;

int main(void)
{
    int N;
    dataRequest1(N);

    dataRequest2(N);

    showData(N);

    return 0;
}

void dataRequest1(int& N)
{
    cout << "N:", cin >> N;
    cout << endl;
}

void dataRequest2(int& N)
{
    dir_arr = new int[N];

    for (int i = 0; i < N; ++i) cout << "array[" << i << "]: ", cin >> dir_arr[i];

}

void showData(int& N)
{
    for (int i = 0; i < N; ++i) cout << dir_arr[i] << " ";
    cout << endl;
}