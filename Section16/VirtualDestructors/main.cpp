#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

class Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Account::withdraw" << std::endl;
    }
    // virtual destructor only needed here, but best practice to declare everyhwere
    virtual ~Account() {std::cout << "Account destructor." << std::endl;}
};

class Checking: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {std::cout << "Checking destructor." << std::endl;}
};

class Savings: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {std::cout << "Savings destructor." << std::endl;}
};

class Trust: public Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {std::cout << "Trust destructor." << std::endl;}
};

int main(){
    
    std::cout << "----------------Pointers--------------------" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    // Always only calls base class destructors
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
    
}