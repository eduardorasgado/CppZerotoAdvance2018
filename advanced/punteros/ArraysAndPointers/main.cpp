#include <iostream>

int main() {
    // defining a string type array
    std::string texts[] = { "one", "two", "three" };

    // size of the array
    std::cout <<"size of texts: " << sizeof(texts)/ sizeof(*texts) << std::endl;
    // to remember arrays
    int matrix[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    // accesing values with decomposition(C++ 17)
    for(auto [i,j,k,l] : matrix) std::cout << i << " " << j << " " << k << " " << l << std::endl;
    return 0;
}