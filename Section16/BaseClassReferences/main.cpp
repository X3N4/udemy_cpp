#include <iostream>

class Account {
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Account::withdraw" << std::endl;
    }
    // virtual destructor only needed here, but best practice to declare everyhwere
    virtual ~Account() { }
};

class Checking: public Account {
    
public:
    virtual void withdraw (double amount) override {
        std::cout << "in Checking::withdraw" << std::endl;
    }
    virtual ~Checking() { }
};

class Savings: public Account {
    
public:
    virtual void withdraw (double amount) override {
        std::cout << "in Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { }
};

class Trust: public Account {
    
public:
    virtual void withdraw (double amount) override {
        std::cout << "in Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { }
};


void do_withdraw(Account &acc, double amount){
    acc.withdraw(amount);
}

int main(){
    
    Account a;
    Account &ref {a};
    ref.withdraw(1000);
    
    // is bound dynamically, so ref to Account puts us in Trust withdraw
    Trust t;
    Account &ref1 {t};
    ref1.withdraw(1000);
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 1000);
    do_withdraw(a2, 1000);
    do_withdraw(a3, 1000);
    do_withdraw(a4, 1000);
    
    return 0;
    
}