#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// simplified using constructor with default arguments
class Base {
    
    int value;
    
public:
    Base(int x=0) : value {x} {cout << "Base overloaded (int) constructor called." << endl;}
    ~Base() {cout << "Base destructor called." << endl;}
};

class Derived : public Base {
    
    int doubled_val;

public:
    // call base constructor like any object in initialization list
    Derived(int x=0) : Base {x}, doubled_val{x*2} {cout << "Derived overloaded (int) constructor called" << endl;}
    ~Derived() {cout << "Derived destructor called." << endl;}
    
};

int main(){
    
//    Base b;
//    Base b{100};
    
//    Derived d;
    Derived d{1000}; // calls overloaded in derived, then no args in base
    return 0;
    
}