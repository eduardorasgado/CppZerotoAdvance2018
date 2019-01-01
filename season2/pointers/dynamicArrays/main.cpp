#include <iostream>

using namespace std;

void takeGrades(int*, int&);
void showGrades(int*, int&);

int main()
{
    std::cout << "[DYNAMIC ARRAYS]" << std::endl;
    int N, *grades;

    std::cout << "Grades quantity: ";
    std::cin >> N;

    // creating a dynamic array
    grades = new int[N];

    takeGrades(grades, N);
    showGrades(grades, N);

    delete[] grades;

    return 0;
}

void takeGrades(int* grades, int& N)
{
    // do not define de dynammic array inside
    // a function, this will leads to memory leaks
    // and bugs
    //grades = new int[N];

    for(int i = 0; i < N; ++i)
    {
        std::cout << "Add a grade: ";
        std::cin >> grades[i];
    }
}

void showGrades(int* grades, int& N)
{
    std::cout << "[SHOWING ALL GRADES]\n";
    for(int i =0; i < N; ++i)
    {
        std::cout << grades[i] << " ";
    }
    std::cout << "\n";
}
