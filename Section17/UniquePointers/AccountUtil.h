#pragma once

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"


void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);
