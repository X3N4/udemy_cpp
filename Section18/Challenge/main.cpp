#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"
#include "InsufficientFundsException.h"
#include "IllegalBalanceException.h"

/*
Section 18
Challenge
For this challenge we want to integrate our own user-defined exception classes into the Account class
hierarchy.

The account classes are provided for you.
Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.

What I would like you to do is:
1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown from the Account class constructor if an account object is created with a negative 
   balance.
   
2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown if a withdraw results in a negative balance.
   You should throw this exception object from the Account withdraw method.
   
That's it - good luck!
Test your code in the main driver.

Have fun and experiment!
*/

int main() {
    std::cout.precision(2);
    std::cout << std::fixed;
    
    std::cout << "-------------Trying Illegal Balance-----------" << std::endl;
    try{
        auto s = std::make_shared<SavingsAccount>("Oscar", -100);
        // need to catch exception types in C++!!
    } catch (const IllegalBalanceException &ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "-------------Trying Insufficient Funds-----------" << std::endl;
    auto c = std::make_unique<CheckingAccount>("Jacques", 100);
    try {
        c->withdraw(200);
        // need to catch exception type!
    } catch (const InsufficientFundsException &ex) {
        std::cout << ex.what() << std::endl;
    }
    
    std::cout << "Caught 'em all" << std::endl;
    
    
        

    
    return 0;
}