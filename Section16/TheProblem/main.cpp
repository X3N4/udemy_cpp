#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Base {
    
public:
    void say_hello() const{
        cout << "What's up, I'm a Base class." << endl;
    }
};

class Dervived: public Base {
    
public:
    void say_hello() const{
        cout << "What's up, I'm a Derived class." << endl;
    }
};

void greetings(const Base &obj){
    cout << "Greetings";
    obj.say_hello();
}

int main(){
    
    Base b;
    b.say_hello();
    
    Dervived d;
    d.say_hello();
    
    // prints base twice
    greetings(b);
    greetings(d);
    
    Base *ptr = new Dervived();
    ptr->say_hello(); // Base::say_hello()
    
    delete ptr;
    
    return 0;
    
}