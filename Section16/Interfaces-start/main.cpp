#include <iostream>

// Lots of duplicate code because we can't inherit friends

class Account {
    
    friend std::ostream &operator<<(std::ostream &out, const Account &acc);
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Account::withdraw" << std::endl;
    }
    // virtual destructor only needed here, but best practice to declare everyhwere
    virtual ~Account() { }
};

std::ostream &operator<<(std::ostream &out, const Account &acc){
    out << "Account display";
    return out;
}

class Checking: public Account {
    
    friend std::ostream &operator<<(std::ostream &out, const Checking &acc);
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Checking::withdraw" << std::endl;
    }
    virtual ~Checking() { }
};

std::ostream &operator<<(std::ostream &out, const Checking &acc){
    out << "Checking display";
    return out;
}

class Savings: public Account {
    
    friend std::ostream &operator<<(std::ostream &out, const Savings &acc);
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { }
};

std::ostream &operator<<(std::ostream &out, const Savings &acc){
    out << "Savings display";
    return out;
}

class Trust: public Account {
    
    friend std::ostream &operator<<(std::ostream &out, const Trust &acc);
    
public:
    virtual void withdraw (double amount){
        std::cout << "in Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { }
};

std::ostream &operator<<(std::ostream &out, const Trust &acc){
    out << "Trust display";
    return out;
}

int main(){
    
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();
    
    // Always account displayed since we have no virtual functions for printing
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;
    std::cout << *p4 << std::endl;
    
    return 0;
    
}