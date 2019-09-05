#include "iostream"
#include "Account.h"
using std::cout;
using std::endl;

Account::Account()
    : balance {0}, name {"This account"}{
}

Account::~Account()
{
}

void Account::deposit(double amount){
    cout << "Depositing " << amount << " to your account." << endl;
}
void Account::withdraw(double amount){
    cout << "Withdrawing " << amount << " from your account." << endl;
}

