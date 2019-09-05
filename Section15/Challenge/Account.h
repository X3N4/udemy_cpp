#pragma once
#include <string>
#include <iostream>

class Account
{
    
    friend std::ostream &operator<<(std::ostream &os, const Account &obj);

private:
    // constants only available to class (doesn't pollute global space)
    static constexpr const char *def_name {"Unnamed Account"};
    static constexpr double def_balance {0.0};

protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name=def_name, double balance=def_balance);
    // no need for default destructor if we don't change it
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;

};

