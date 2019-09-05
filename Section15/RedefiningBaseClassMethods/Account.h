#pragma once
#include <string>

class Account
{
    
    friend std::ostream &operator<<(std::ostream &os, const Account &obj);
    
protected:
    double balance;
    
public:
    Account(double balance=0.0);
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);

};

