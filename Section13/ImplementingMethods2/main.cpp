#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include "Account.h"

using namespace std;

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