#include <iostream>

// macros
#define space() (std::cout << std::endl)

int main() {
    // defining a string type array
    std::string texts[] = { "one", "two", "three", "four", "five" };

    // size of the array
    std::cout <<"size of texts: " << sizeof(texts)/ sizeof(*texts) << std::endl;

    // pointer to the first position of the array
    std::string *pText1 = &texts[0];
    // it is same as:
    std::string *pText2 = texts;

    // printing directly with c11
    std::cout << " Imprimiento texts: " << std::endl;
    for(auto& v : texts) std::cout << v << " ";
    space();

    // printing the array using pointers
    // flush: Synchronizes the associated stream buffer with its controlled output sequence.
    for (int m = 0; m < sizeof(texts)/sizeof(std::string); ++m) std::cout << *(pText1+m) << " " << std::flush;
    space();

    // other way to use a pointer as value iterator in array
    for (int m = 0; m < sizeof(texts)/sizeof(std::string); ++m, ++pText2) std::cout << *pText2 << " " << std::flush;
    space();

    // pointing to the last elemento of the array
    auto *pEnd = &texts[sizeof(texts)/sizeof(*texts)-1];
    //pointing to first element of the array
    auto *pElement = &texts[0];

    // Printing last element
    std::cout << "Last element of the array: " << *pEnd << std::endl;

    // lopping through array by comparing two pointers
    while(true)
    {
        std::cout << *pElement << " " << std::flush;
        pElement++;
        // if pointers point same address
        if(pElement == pEnd) break;
    }
    space();

    // to remember arrays
    int matrix[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    // accesing values with decomposition(C++ 17)
    for(auto& [i,j,k,l] : matrix) std::cout << i << " " << j << " " << k << " " << l << std::endl;
    return 0;
}