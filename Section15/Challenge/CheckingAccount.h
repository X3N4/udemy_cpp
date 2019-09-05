#pragma once
#include <Account.h>

class CheckingAccount: public Account
{
    
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &obj);
    
private:
    static constexpr const char *def_name {"Random Checking Account"};
    static constexpr double def_balance {0.0};
    static constexpr double def_withdrawal_fee {1.50};

protected:
    double withdrawal_fee;

public:
    CheckingAccount(std::string name=def_name, double balance=def_balance, double withdrawal_fee=def_withdrawal_fee);
    bool withdraw(double amount);

};

