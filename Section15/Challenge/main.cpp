#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <Account.h>
#include <SavingsAccount.h>
#include <CheckingAccount.h>
#include <TrustAccount.h>
#include <AccountUtil.h>

using namespace std;

// Section 15 Challenge
// Inheritance

/*
You are provided with a simple Account class hierarchy that contains
Account - Base class
Savings Account - Derived class

An Account has a name and a balance.
A Savings Account is an Account and adds an interest rate.

I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
that make it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts.

Please refer to the source code provided and the video explanation of this challenge for more details.

Your challenge is the following:

1. Add a Checking account class to the Account hierarchy
    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
    Every withdrawal transaction will be assessed this flat fee.

2. Add a Trust account class to the Account hierarchy
    A Trust account has a name, a balance, and an interest rate
    The Trust account deposit works just like a savings account deposit.
    However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
    
    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
    
Hints: 
    Reuse existing functionality!!
    Think about what the Base class will be for the new classes.
    Add helper functions to Account_Util.h and Account_Util.cpp if you wish to work with your new classes.
    (You don't have to, but it will make your main much easier to use)
    
Have fun!!  You are no longer beginner C++ programmers!

If you want more practice with operator overloading you can overload += and -= for deposit and withdrawal :)
*/

int main(){
    cout.precision(2);
    cout << fixed;
    /*
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Oscar", 1337});
    accounts.push_back(Account {"Simba", 1000});
    accounts.push_back(Account {"Jacques"});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Savings Accounts
    vector<SavingsAccount> savings_accounts;
    savings_accounts.push_back(SavingsAccount {});
    savings_accounts.push_back(SavingsAccount {"MJ"});
    savings_accounts.push_back(SavingsAccount {"Lebron", 1000});
    savings_accounts.push_back(SavingsAccount {"Steph", 2000, 0.03});
    
    
    display(savings_accounts);
    deposit(savings_accounts, 1000);
    withdraw(savings_accounts, 2000);
    
    
    // Checking Accounts
    vector<CheckingAccount> check_accounts;
    check_accounts.push_back(CheckingAccount {});
    check_accounts.push_back(CheckingAccount {"MJ"});
    check_accounts.push_back(CheckingAccount {"Lebron", 1500});
    check_accounts.push_back(CheckingAccount {"Steph", 2000, 0.5});
    
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    */
    
    // Trust Accounts
    vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount {});
    trust_accounts.push_back(TrustAccount {"Simba"});
    trust_accounts.push_back(TrustAccount {"Jacques", 1500});
    trust_accounts.push_back(TrustAccount {"Oscar", 2000, 0.05});
    
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 300);
    
    trust_accounts.at(3).deposit(5000);
    cout << trust_accounts.at(3).get_balance() << endl;
    trust_accounts.at(3).withdraw(1000);
    cout << trust_accounts.at(3) << endl;
    trust_accounts.at(3).withdraw(500);
    cout << trust_accounts.at(3) << endl;
    trust_accounts.at(3).withdraw(1500);
    cout << trust_accounts.at(3) << endl;
    trust_accounts.at(3).withdraw(1);
    cout << trust_accounts.at(3) << endl;
    
    return 0;
    
}