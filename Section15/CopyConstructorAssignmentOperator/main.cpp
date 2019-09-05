#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Base {
    
    int value;
    
public:
    Base(int x=0) : value {x} {cout << "Base overloaded (int) constructor called." << endl;}
    Base(const Base &source): value {source.value} {cout << "Base copy constructor called." << endl;}
    Base &operator=(const Base &obj){
        cout << "Base operator=." << endl;
        if (this == &obj) //we're comparing memory locations here, not object values
            return *this;
        value = obj.value;
        return *this;
    }
    ~Base() {cout << "Base destructor called." << endl;}
};

class Derived : public Base {
    
    int doubled_val;

public:
    // call base constructor like any object in initialization list
    Derived(int x=0) : Base{x}, doubled_val{x*2} {cout << "Derived overloaded (int) constructor called" << endl;}
    Derived(const Derived &source) 
        : Base{source}, doubled_val{source.doubled_val} {
            cout << "Derived copy constructor called" << endl;
        }
    Derived &operator=(const Derived &obj){
        cout << "Derived operator=." << endl;
        if (this != &obj){
            Base::operator=(obj);
            doubled_val = obj.doubled_val;
        }
        return *this;
    }
    ~Derived() {cout << "Derived destructor called." << endl;}
    
};

int main(){
    
//    Base b {100};
//    Base b1 {b};
//    b = b1;
    
    Derived d{1000};
    Derived d1 {d}; // calls overloaded in derived, then no args in base
    d = d1;
    return 0;
    
}