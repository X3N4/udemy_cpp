#pragma once
#include <SavingsAccount.h>

class TrustAccount: public SavingsAccount{
    
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &obj);
    
private:
    static constexpr const char *def_name {"Random Trust Account"};
    static constexpr double def_balance {0.0};
    static constexpr float def_interest_rate {0.0};
    static constexpr double def_bonus {50.0};

protected:
    double bonus;
    int num_withdrawals;

public:
    TrustAccount(std::string name=def_name, double balance=def_balance,
                 float interest_rate=def_interest_rate, double bonus=def_bonus);
    bool deposit(double amount);
    bool withdraw(double amount);

};

