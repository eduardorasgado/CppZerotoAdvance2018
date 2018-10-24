#include <iostream>
#include <cstdlib>
#include <memory>

class Gadget{
  private:
    int x;
    bool reality;

  public:
    Gadget(int x, bool reality): x{x}, reality{reality}{}
    ~Gadget() { } // Destructor
    void someMethod()
    {
      if(this->reality)
        std::cout << "Hi, the num is: " << this->x << std::endl;
      else std::cout << "No access to reality" << std::endl;
    }
};

void myFunc(int&, bool&);

int main() {
  //
  int x1{200};
  bool r1{true};

  auto *g = new Gadget(5, true);
  g->someMethod();
  myFunc(x1, r1);
  //std::cout << "No leaks" << std::endl;
  return 0;
}

void myFunc(int&n, bool&r)
{
  // usando puntero compartido
  auto p = std::make_shared<Gadget>(n, r);
  p->someMethod();
  // No leaks, no need to delete things

}