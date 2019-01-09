#include <iostream>
#include <map>
#include <memory>

typedef std::map<char, int> charmap;

void takeName(std::string*);
void printName(std::string*);
std::shared_ptr<charmap> countVowels(std::string*);

int main()
{
    auto name = new std::string;
    takeName(name);
    printName(name);

    auto vowels = countVowels(name);
    for(auto v : *vowels)
    {
        std::cout << "vowel:" << v.first << ", count: " << v.second << "\n";
    }

    delete name;
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
    std::cout << "Counting vowels.\n";
    auto vowels = std::make_shared<charmap>();
    //int s_size = static_cast<int>(name->size());

    char all_vowels[] = {'A', 'E', 'I', 'O', 'U'};

    for(char v : all_vowels)
    {
        // to count times actual vowel is repeated in string
        int counter{0};
        // counting in string
        for(char&letter : *name)
        {
            if(std::toupper(letter) == v)
            {
                // converting to upper case and comparing to
                // a vowel
                ++counter;
            }
        }
        // inserting the actual vowel and the final counter
        vowels->insert(std::pair<char, int>(v, counter));
    }
    return vowels;
}

