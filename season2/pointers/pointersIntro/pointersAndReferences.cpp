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

int main() {
    std::string query = "Select * from users where used.id == $id";
    Printer p1 = Printer();
    p1.setQuery(query);

    Printer& p_ref = p1;
    p_ref.setQuery("DELETE * FROM users WHERE user.Id = $id");

    Printer* p_pointer = new Printer();

    printStatement(p_ref);
    //printStatement(p1);
    std::cout << "after executing above function scope" << std::endl;

    //p_pointer = NULL;
    delete p_pointer;
    return 0;
}

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