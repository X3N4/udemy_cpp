#pragma once
#include <string>

class Account
{
    double balance;
    std::string name;
    
public:
    Account();
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);

};

