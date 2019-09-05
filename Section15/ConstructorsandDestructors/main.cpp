#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Base {
    
    int value;
    
public:
    // one line constructor init using initialization list
    Base() : value{0} {cout << "Base no args constructor called." << endl;}
    Base(int x) : value {x} {cout << "Base overloaded (int) constructor called." << endl;}
    ~Base() {cout << "Base destructor called." << endl;}
};

class Derived : public Base {
    // initializes Base, but not derived object
    // only inherits non-special constructors (not move, copy etc.)
    using Base::Base;
    
    int doubled_val;

public:
    Derived() : doubled_val{0} {cout << "Derived no args constructor called." << endl;}
    // calls only base no args constructor, not overloaded one
    Derived(int x) : doubled_val{x*2} {cout << "Derived overloaded constructor called" << endl;}
    ~Derived() {cout << "Derived destructor called." << endl;}
    
};

int main(){
    
//    Base b;
//    Base b{100};
    
//    Derived d;
    Derived d{1000}; // calls overloaded in derived, then no args in base
    return 0;
    
}