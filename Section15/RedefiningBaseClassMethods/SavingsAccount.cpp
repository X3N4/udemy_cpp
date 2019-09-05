#include "SavingsAccount.h"

using std::cout;
using std::endl;

SavingsAccount::SavingsAccount(double balance, float interest_rate)
    : Account{balance}, interest_rate{interest_rate}{
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::deposit(double amount){
    amount *= (1 + interest_rate);
    Account::deposit(amount);
    // no need to print, account deposit already does it for us
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &obj){
    os << "Savings Account: balance = " << obj.balance << ", interest = " << obj.interest_rate;
    return os;
}

