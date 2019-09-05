#pragma once
#include <vector>
#include <Account.h>
#include <SavingsAccount.h>
#include <CheckingAccount.h>
#include <TrustAccount.h>

// Simple utility functions for the Account class
// Can be defined in header and cpp files like this

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Helpers for Savings Accounts
void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

// Helpers for Checking Accounts
void display(const std::vector<CheckingAccount> &accounts);
void deposit(std::vector<CheckingAccount> &accounts, double amount);
void withdraw(std::vector<CheckingAccount> &accounts, double amount);

// Helpers for Trust Accounts
void display(const std::vector<TrustAccount> &accounts);
void deposit(std::vector<TrustAccount> &accounts, double amount);
void withdraw(std::vector<TrustAccount> &accounts, double amount);

