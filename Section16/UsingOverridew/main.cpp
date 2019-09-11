#include <iostream>


class Base {

public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a base class object." << std::endl;
    }
    // don't forget virtual destructor
    virtual ~Base() {}; // needs empty curly braces here to work
};

class Derived: public Base {
    
public:
    // override throws error instead of silently defining new function when spec is wrong
    virtual void say_hello() const override { // no const
        std::cout << "Hello - I'm a derived class object." << std::endl;
    }
    virtual ~Derived() {};
};


int main(){
    
    Base *p1 = new Base{};
    p1->say_hello();
    
    Derived *p2 = new Derived{};
    p2->say_hello();
    
    // problematic: statically bound to base pointer
    Base *p3 = new Derived{};
    p3->say_hello();
    
    return 0;
    
}