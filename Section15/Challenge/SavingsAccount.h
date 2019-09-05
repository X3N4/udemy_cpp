#pragma once
#include "Account.h"

// When depositing, you get 5% interest
// When withdrawing, Account method can be used
class SavingsAccount: public Account
{
    
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &obj);

// declare consts only visible within this class
private:
    static constexpr const char *def_name {"Unnamed savings account"};
    static constexpr double def_balance {0.0};
    static constexpr float def_interest_rate {0.0};

protected:
    float interest_rate;
    
public:
    SavingsAccount(std::string name = def_name, double balance=def_balance, float interest_rate=def_interest_rate);
    
    bool deposit(double amount);

};

