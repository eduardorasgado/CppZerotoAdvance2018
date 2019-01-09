#include <iostream>
#include <map>
#include <memory>

typedef std::map<std::string, int> charmap;

void takeName(std::string*);
void printName(std::string*);
std::shared_ptr<charmap> countVowels(std::string*);

int main()
{
    auto name = new std::string;
    takeName(name);
    printName(name);

    countVowels(name);
    return 0;
}

void takeName(std::string* name)
{
    //
    std::cout << "Give me your name: ";
    // this getline is for strings
    getline(std::cin, *name);
}

void printName(std::string* name)
{
    std::cout << *name << std::endl;
}


std::shared_ptr<charmap>countVowels(std::string* name)
{
    //
    auto vowels = std::make_shared<charmap>();
    int s_size = static_cast<int>(name->size());

    for(auto v : {"A", "E", "I", "O", "U"})
    {
        //std::cout << v << " ";
        for(char&letter : *name)
        {
            //std::cout << letter << "|";
            if(reinterpret_cast<char*>(letter) == v)
            {
                // converting to upper case and comparing to
                // a vowel
                std::cout << v << " ";
            }
        }
        //std::cout << "\n";
    }
}

