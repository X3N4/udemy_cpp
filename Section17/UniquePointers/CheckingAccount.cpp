#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
    : Account {name, balance} {
}

bool CheckingAccount::deposit(double amount){
    return Account::deposit(amount);
}

bool CheckingAccount::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}

void CheckingAccount::print(std::ostream &os) const{
    os << "[CheckingAccount: " << name << ": " << balance  << "]";
}
