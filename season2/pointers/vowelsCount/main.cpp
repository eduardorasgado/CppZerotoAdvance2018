#include <iostream>

void takeN(int&);
void takeName(char*, int&);
template <typename T>
void print(T*,int&);
int vowelCounter(char*, int&);

int main()
{
    int N;
    takeN(N);

    auto arr = new char[N];
    takeName(arr, N);
    print(arr,N);
    int vowels;
    vowels = vowelCounter(arr, N);
    std::cout << "vowels: " << vowels << std::endl;

    return 0;
}

void takeN(int& N)
{
    std::cout << "N: ";
    std::cin >> N;
}

void takeName(char*arr,int& N)
{
    std::cout << "Give me a name: ";
    std::cin.ignore();
    std::cin.getline(arr, N, '\n');
}

template <typename T>
void print(T*arr,int&N)
{
    for(int i = 0;i < N;++i)
    {
        std::cout << *(arr+i);
    }
    std::cout << "\n";
}

int vowelCounter(char* arr, int&N)
{
    for(int i = 0;i < N; i++)
    {
        // Converting to mayus
        *(arr+i) = std::toupper(*(arr+i));
    }
    auto abc = {'A', 'E', 'I', 'O', 'U'};
    int counter = 0;
    for (int i = 0; i < N; ++i) {
        for(auto& v : abc)
        {
            // searching vowels
            if(v == *(arr+i)) { counter++; }
        }
    }
    return counter;
}
