#include <iostream>
#include <memory>

// forward declaration -> Class prototype
class B;

// two classes with circular reference
class A {
    std::shared_ptr<B> b_ptr;
    
public:
    void set_B(std::shared_ptr<B> &b) {
        b_ptr = b;
    }
    A() {std::cout << "A Constructor" << std::endl;}
    ~A() {std::cout << "A Destructor" << std::endl;}
};

class B {
    // make this weak and circular reference is broken
    std::weak_ptr<A> a_ptr;
    
public:
    void set_A(std::shared_ptr<A> &a) {
        a_ptr = a;
    }
    B() {std::cout << "B Constructor" << std::endl;}
    ~B() {std::cout << "B Destructor" << std::endl;}
};

int main(){
    
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    
    a->set_B(b);
    b->set_A(a);
    
    // Destructors never get called -> Memory leak!
    return 0;
    
}