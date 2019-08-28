#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Account{
private:
    // attributes
    string name;
    double balance;

public:
    // inline defined methods
    // do this for straightforward methods
    void set_balance(double amount){balance=amount;};
    double get_balance() {return balance;}
    
    // will be defined outside class declaration
    // only the prototypes are in the class
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

void Account::set_name(string s){
    // no need for self, C++ automatically resolves to proper scope
    name = s;
}

string Account::get_name(){
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

int main(){
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000);
    
    if (frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit failed" << endl;
    
    if (frank_account.withdraw(500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;
        
    if (frank_account.withdraw(1500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;
    
    return 0;
    
}