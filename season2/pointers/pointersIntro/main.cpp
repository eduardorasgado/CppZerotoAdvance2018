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


    return 0;
}
