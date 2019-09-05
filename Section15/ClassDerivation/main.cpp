#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <Account.h>
#include <SavingsAccount.h>

using namespace std;

int main(){
    
    // Account
    cout << "Using the account class" << endl;
    Account acc {};
    acc.deposit(2000.0);
    acc.withdraw(5000);
    
    cout << endl;
    
    Account *p_acc {nullptr};
    p_acc = new Account {};
    // possible ways to access heap object methods
    p_acc->deposit(1337);
    (*p_acc).withdraw(7331);
    
    cout << endl;
    
    // Savings Account
    cout << "\nUsing the savings account class" << endl;
    SavingsAccount save_acc {};
    save_acc.deposit(2000.0);
    save_acc.withdraw(5000);
    
    cout << endl;
    
    SavingsAccount *ps_acc {nullptr};
    ps_acc = new SavingsAccount {};
    // possible ways to access heap object methods
    ps_acc->deposit(1337);
    (*ps_acc).withdraw(7331);
    delete ps_acc;
    
    cout << endl;
    
    
    
    
    return 0;
    
}