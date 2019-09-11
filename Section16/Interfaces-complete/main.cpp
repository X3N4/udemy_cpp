#include <iostream>

class I_Printable {
    
    friend std::ostream &operator<<(std::ostream &out, const I_Printable &obj);
    
public:
    virtual void print(std::ostream &out) const = 0;
};

std::ostream &operator<<(std::ostream &out, const I_Printable &obj){
    obj.print(out);
    return out;
}

class Account: public I_Printable {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &out) const override {
        out << "Account display.";
    }
    virtual ~Account() { }
};

// note that all following classes inherit account, which inherits I_Printable -> interface works
class Checking: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Checking::withdraw" << std::endl;
    }
    virtual void print(std::ostream &out) const override {
        out << "Checking display.";
    }
    virtual ~Checking() { }
};


class Savings: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Savings::withdraw" << std::endl;
    }
    virtual void print(std::ostream &out) const override {
        out << "Savings display.";
    }
    virtual ~Savings() { }
};


class Trust: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Trust::withdraw" << std::endl;
    }
    virtual void print(std::ostream &out) const override {
        out << "Trust display.";
    }
    virtual ~Trust() { }
};

class Cat: public I_Printable {
    
public:
    virtual void print(std::ostream &out) const override {
        out << "I like cheezeburgerz";
    }
    // don't forget empty braces here
    virtual ~Cat() { };
};

int main(){
    
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();
    
    // Works now
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;
    std::cout << *p4 << std::endl;
    
    
    Cat *c = new Cat();
    std::cout << *c << std::endl;
    return 0;
    
}