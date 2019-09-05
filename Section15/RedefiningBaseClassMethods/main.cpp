#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <Account.h>
#include <SavingsAccount.h>

using namespace std;

int main(){
    
    Account a1 {1000.0};
    cout << a1 << endl;
    
    a1.deposit(500);
    cout << a1 << endl;
    
    a1.withdraw(1000);
    cout << a1 << endl;
    
    a1.withdraw(5000);
    cout << a1 << endl;
    
    SavingsAccount s1 {1000.0, 0.05};
    cout << s1 << endl;
    
    s1.deposit(1000);
    cout << s1 << endl;
    
    s1.withdraw(2000);
    cout << s1 << endl;
    
    s1.withdraw(1000);
    cout << s1 << endl;
    
    SavingsAccount s2;
    cout << s2 << endl;
    
    return 0;
    
}