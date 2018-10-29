#include <iostream>

template <typename T>
void showing(T*);

template <typename T, size_t N>
constexpr size_t sizeArray(T(&)[N]) noexcept
{
    return N;
}

int main() {
    const int NSTRINGS = 5;
    // creating a string
    std::string texts[NSTRINGS] = { "One", "Two", "Three", "Four", "Five" };
    // using a function to create an array based on another one
    std::string copyTexts[sizeArray(texts)];

    //create a pointer to that string
    auto *pTexts = texts;
    showing(pTexts);
    pTexts = pTexts+1;
    showing(pTexts);

    return 0;
}

template <typename T>
void showing(T* p)
{
    std::cout << *p << std::endl;
}