#pragma once
#include "Account.h"

// Inheritance syntax
class SavingsAccount: public Account
{
    float interest_rate;
    
public:
    SavingsAccount();
    ~SavingsAccount();
    // overridden Parent class methods
    void deposit(double amount);
    void withdraw(double amount);

};

