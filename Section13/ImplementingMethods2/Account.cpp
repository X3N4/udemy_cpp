#include "Account.h"

void Account::set_name(std::string s){
    // no need for self, C++ automatically resolves to proper scope
    name = s;
}

std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    if (amount > 0){
        balance += amount;
        return true;
    }
    else {
        return false;
    }
}

bool Account::withdraw(double amount){
    if (balance - amount >= 0){
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}

