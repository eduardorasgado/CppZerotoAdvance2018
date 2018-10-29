#include <iostream>

// macros
#define space() (std::cout << std::endl)

int main() {
    // defining a string type array
    std::string texts[] = { "one", "two", "three" };

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
    for (int m = 0; m < sizeof(texts)/sizeof(std::string); ++m) {
        std::cout << *(pText1+m) << " ";
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