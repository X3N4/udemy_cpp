#include "iostream"
#include "Account.h"
using std::cout;
using std::endl;

Account::Account(double balance)
    : balance {balance}{
}

Account::~Account()
{
}

void Account::deposit(double amount){
    cout << "Depositing " << amount << " to your account." << endl;
    balance += amount;
}
void Account::withdraw(double amount){
    if (amount < balance){
        balance -= amount;
        cout << "Withdrawing " << amount << " from your account." << endl;
    } else {
        cout << "Insufficient funds for withdrawal." << endl;
    }
    
}

std::ostream &operator<<(std::ostream &os, const Account &obj){
    os << "Account balance: " << obj.balance;
    return os;
}