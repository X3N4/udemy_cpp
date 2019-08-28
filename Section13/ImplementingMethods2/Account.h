#pragma once
#include <string>
class Account{
private:
    // attributes
    std::string name;
    double balance;

public:
    // inline defined methods
    // do this for straightforward methods
    void set_balance(double amount){balance=amount;};
    double get_balance() {return balance;}
    
    // will be defined outside class declaration
    // only the prototypes are in the class
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

