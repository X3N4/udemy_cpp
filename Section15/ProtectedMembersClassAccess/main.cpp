#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Base {
    
public:
    int a {0};
    // member method can access all class members
    void display() const {cout << a << ", " << b << ", " << c "." << endl;} 

protected:
    int b {0};

private:
    int c {0};
};


class Derived: public Base {
    
    
    // a public
    // b protected
    // c private 
    // -> access to a and b, but not to c
    
public:
    void base_member_acces() const {
        a = 100;
        b = 200;
//        c = 300;  Error, needs getter and setter in base class to work
    }
    
}

int main(){
    
    cout << "Base member access from base objects" << endl;
    Base base;
    base.a = 100; // Good
//    base.b = 200; // Error
//    base.c = 300; // Error
    
    
    cout << "Base member access from derived objects" << endl;
    Derived d;
    d.a = 100;
    d.b = 200;
    d.c = 300;
    
    return 0;
    
}