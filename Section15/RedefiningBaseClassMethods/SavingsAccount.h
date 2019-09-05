#pragma once
#include "Account.h"

// When depositing, you get 5% interest
// When withdrawing, Account method can be used
class SavingsAccount: public Account
{
    
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &obj);
    
protected:
    float interest_rate;
    
public:
    // need default argument here as well, else we can't call constructor with no args
    SavingsAccount(double balance=0.0, float interest_rate=0.03);
    ~SavingsAccount();
    // overridden Parent class methods
    void deposit(double amount);
    // withdraw is inherited

};

