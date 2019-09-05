#include "iostream"
#include "SavingsAccount.h"

using std::cout;
using std::endl;

SavingsAccount::SavingsAccount()
    : interest_rate {3.0}{
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::deposit(double amount){
    cout << "Depositing " << amount << " to your savings account." << endl;
}
void SavingsAccount::withdraw(double amount){
    cout << "Withdrawing " << amount << " from your savings account." << endl;
}
