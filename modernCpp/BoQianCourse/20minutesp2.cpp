/*
 * LEARNING C++ 11 Features
 * */
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
// new feature in c11
#include <initializer_list>

// customized vector
template <class T>
class edVector
{
        std::vector<T> my_vector;
    public:
        edVector(const std::initializer_list<T>& v)
        {
            // push some elements to our vector
            for(auto i = v.begin(); i < v.end();++i)
                // pushing value contained in i
                this->my_vector.push_back(*i);
        }
        // this is for be able to call a edVector.begin()
        // for use a template with the iterator we need to use keyword: typename
        // This tells the compiler that vector<T>::iterator should be treated as a type,
        // something it can't assume since iterator is dependent on what T is.
        typename std::vector<T>::iterator begin()
        {
            return my_vector.begin();
        }
        // this is for be able to call a edVector.end()
        typename std::vector<T>::iterator end()
        {
            return my_vector.end();
        }
};

template <typename T>
void showingVector(edVector<T>&);

int main()
{
    // beyond that all the relevant STL containers have been updated to accept initializer_list
    std::cout << "Hello Vector!\n";
    edVector<int> v = {0, 1, 2, 3, 4, 5};
    edVector<int> v2{1,2,3,4,5,6,7,8,9,10}; // same thing as above

    // lets printing the vector
    showingVector(v);
    return 0;
}

template <typename T>
void showingVector(edVector<T>& v)
{
    std::ostream_iterator<T> output(std::cout, " ");
    std::copy(v.begin(), v.end(), output);
    std::cout << std::endl;
}