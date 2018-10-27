/*
 * LEARNING C++ 11 Features
 * */
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    // initializing a vector
    std::vector<int> v;
    // pushing values
    for (int i = 0; i < 4; ++i) {
        v.push_back(i);
    }
    //showing values
    std::ostream_iterator<int> output(std::cout, " ");
    std::copy(v.begin(), v.end(), output);
    std::cout << "\n";

    // C11 vector
    // we can initialize a vector same way we can do it with an array
    std::vector<int> v2 = {1,2,3,4,5,6};
    std::copy(v2.begin(), v2.end(), output);
    std::cout << "\n";

    return 0;
}