//
// Created by cheetos on 4/12/2020.
//
#include <iostream>

class Printer {
    private:
        std::string query;
    public:
        Printer() {
            std::cout << "[object created]\n";
            this->query = "";
        }

        ~Printer() {
            std::cout << this->query.length() << "\n";
            std::cout << "[object deleted]\n";
        }

        std::string getQuery() {
            return this->query;
        }

        void setQuery(std::string query) {
            this->query = query;
        }
};

void printStatement(Printer&);
void printFromPointerObject(Printer*);

int main() {
    std::string query = "Select * from users where used.id == $id";
    auto p1 = Printer();
    p1.setQuery(query);

    Printer& p_ref = p1;
    p_ref.setQuery("DELETE * FROM users WHERE user.Id = $id");

    Printer* p_pointer = new Printer();
    p_pointer->setQuery(query);

    std::cout << "---before executing function---" << std::endl;
    printStatement(p_ref);
    std::cout << "after executing above function scope" << std::endl;

    printFromPointerObject(p_pointer);
    std::cout << "after calling function for pointers" << std::endl;

    // p1 is deleted automatically since it is not dynamic
    //p_pointer = NULL;
    delete p_pointer;
    return 0;
}

/*
* Reference as parameter, to avoid creation of a new Printer object for parameter object
*/
void printStatement(Printer& p) {
    // creating a dynamic object, stored in heap
    Printer* pScoped = new Printer();
    pScoped->setQuery(p.getQuery());

    // doing stuff with pointer
    std::cout << pScoped->getQuery()+ "\n";
    // now if we do not want to use the object any more we can delete it
    // as we create an object with pointers, It is our responsability to
    // delete this element from memory
    delete pScoped;

    std::cout << "Doing another stuff inside printing function" << std::endl;

}

/*
* Pointer as parameter, to avoid creation of a new Printer object, dynamic object handling
*/
void printFromPointerObject(Printer* p_pointer) {
    std::cout << p_pointer->getQuery() << std::endl;
}