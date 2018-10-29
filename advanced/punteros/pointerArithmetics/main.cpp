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
    // addition
    pTexts = pTexts+1;
    showing(pTexts);
    pTexts += 3;
    showing(pTexts);
    // substraction
    pTexts -= 2;
    showing(pTexts);

    std::cout << "Last element in array: ";
    auto *pEnd = &texts[sizeArray(texts)-1];
    showing(pEnd);

    // creating another pointer to last element of the array
    auto *pEnd2 = texts+(sizeArray(texts)-1);
    showing(pEnd2);
    if(pEnd==pEnd2) std::cout << "pEnd and pEnd2 are pointing same element in memory" << std::endl;

    // looping over an array by comparing two pointers
    pTexts =  texts;
    while(pTexts != pEnd2+1)
    {
        showing(pTexts);
        pTexts++;
    }
    std::cout << "last element: " << texts[NSTRINGS-1] << std::endl;

    // returning pointers to their initial values
    pTexts = &texts[0];
    // pointing to address to last element of the array + the next location in memory
    pEnd = &texts[NSTRINGS-1]+1;
    // casting  to long: an array usually has a lot of values
    long elements = (long)(pEnd - pTexts);
    std::cout << "Elements in the array: " << elements << std::endl;

    // the middle of the array
    pTexts += NSTRINGS/2;
    std::cout << "Middle of the array: "; showing(pTexts);

    return 0;
}

template <typename T>
void showing(T* p)
{
    std::cout << *p << std::endl;
}