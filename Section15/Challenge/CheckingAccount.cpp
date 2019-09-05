#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance, double withdrawal_fee)
    : Account{name, balance}, withdrawal_fee{withdrawal_fee}{
}

bool CheckingAccount::withdraw(double amount){
    amount += withdrawal_fee;
    return Account::withdraw(amount);
}


std::ostream &operator<<(std::ostream &os, const CheckingAccount &obj){
    os << "(Checking Account " << obj.name << ": balance=" << obj.balance << ", fee=" << obj.withdrawal_fee << ")";
    return os;
}

