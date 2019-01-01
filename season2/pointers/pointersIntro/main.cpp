#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator> // for ostream iterator
#include <algorithm>

using namespace std;

int main()
{
    auto endLine = "\n";
    auto metrics = new std::vector<std::string>();
    metrics->push_back("Hello ");
    metrics->push_back("STL World");

    [&metrics](std::string line){
        metrics->push_back(line);
        std::ostream_iterator<std::string> output(std::cout, "");

        std::copy(metrics->begin(), metrics->end(), output);
    }(endLine);

    /*
    * POINTERS
    * &n = n address
    * *n = n address storage
    */
    int num = 20;
    std::cout << "Numer: " << num << std::endl;
    std::cout << "num address: " << &num << std::endl;

    // pointer: variable that store the memory address of another var
    int *pNum = &num;

    // dereference operator
    std::cout << "pointer has the value: "<< *pNum << std::endl;
    std::cout << "pointer mem address: " << pNum << std::endl;
    return 0;
}
