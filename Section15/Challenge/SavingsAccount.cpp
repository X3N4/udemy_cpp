#include "SavingsAccount.h"

// constructor delegation with superclass (similar to python super().__init__())
SavingsAccount::SavingsAccount(std::string name, double balance, float interest_rate)
    : Account{name, balance}, interest_rate{interest_rate}{
}

bool SavingsAccount::deposit(double amount){
    // need to return since we do return bools
    amount *= (1 + interest_rate);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &obj){
    os << "(Savings Account " << obj.name << ": balance = " << obj.balance << ", interest = " << obj.interest_rate << ")";
    return os;
}
