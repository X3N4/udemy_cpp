#include "AccountUtil.h"
#include <iostream>

// include all other Accounts in header and then only have to include AccountUtil.h here

// Account helpers
void display(const std::vector<Account> &accounts){
    // need to have a reference here. Const cause we don't change the accounts in the vector
    std::cout << "----------------Displaying" << accounts.size() << " Accounts-----------" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "----------------Depositing to " << accounts.size() << " Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "." << std::endl; //name is protected! print like this
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "----------------Withdrawing from " << accounts.size() << " Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "." << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

// SavingsAccount helpers
void display(const std::vector<SavingsAccount> &accounts){
    std::cout << "----------------Displaying" << accounts.size() << " Savings Accounts-----------" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void deposit(std::vector<SavingsAccount> &accounts, double amount){
    std::cout << "----------------Depositing to " << accounts.size() << " Savings Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "." << std::endl; //name is protected! print like this
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void withdraw(std::vector<SavingsAccount> &accounts, double amount){
    std::cout << "----------------Withdrawing from " << accounts.size() << " Savings Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "." << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

// CheckingAccount helpers
void display(const std::vector<CheckingAccount> &accounts){
    std::cout << "----------------Displaying" << accounts.size() << " Checking Accounts-----------" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void deposit(std::vector<CheckingAccount> &accounts, double amount){
    std::cout << "----------------Depositing to " << accounts.size() << " Checking Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "." << std::endl; //name is protected! print like this
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void withdraw(std::vector<CheckingAccount> &accounts, double amount){
    std::cout << "----------------Withdrawing from " << accounts.size() << " Checking Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "." << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}


// TrustAccount helpers
void display(const std::vector<TrustAccount> &accounts){
    std::cout << "----------------Displaying" << accounts.size() << " Trust Accounts-----------" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void deposit(std::vector<TrustAccount> &accounts, double amount){
    std::cout << "----------------Depositing to " << accounts.size() << " Trust Accounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << "." << std::endl; //name is protected! print like this
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

void withdraw(std::vector<TrustAccount> &accounts, double amount){
    std::cout << "----------------Withdrawing from " << accounts.size() << " TrustAccounts-----------" << std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << "." << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << "." << std::endl;
    }
    std::cout << std::endl << "-----------------------------------------------------------" << std::endl;
}

