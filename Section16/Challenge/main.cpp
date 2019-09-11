#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"

/*
// Section 16 Challenge
// Polymorphism

You are provided with a completed Account class hierarchy that was completed in Section 1.
The provided class hierarchy does not use dynamic polymorphism (it has no virtual functions!)

Your challenge is the following:

1.  Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:
        virtual bool deposit(double amount) = 0;
        virtual bool withdraw(double amount) = 0;

        Hint: you can implement these functions in the Account class if it makes sense

2. Create an I_Printable class interface as we did in the course and provide functionality so
    all accounts are printable to an ostream using the overloaded insertion operator.
    
        class I_Printable
        {
            friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
        public:
            virtual void print(std::ostream &os) const = 0;
            virtual ~I_Printable() = default;
        };

3. Modify the functions in the Account_Util files so we only have one version of each. For example,

        void display(const std::vector<Account *> &accounts);
        void deposit(std::vector<Account *> &accounts, double amount);
        void withdraw(std::vector<Account *> &accounts, double amount);
        
        Note that the vector is a vector of pointers to Account objects <Account *>
        This is what we need for dynamic polymorphism.
        
4. Test your code with base class pointers as well as local objects.
    I provided a simple main driver that will get you started

Hints: 
    - Reuse existing functionality!!
    - If your class has a virtual function then be sure to implement a virtual destructor. 
       You can have the C++ generate a default destructor for you with:
           virtual ~Class_Name() = default;
    - Take it one step at a time.
    - Start by making the Account class abstract by adding the pure virtual functions.
    
Have fun!!  This is a very, very challenging exercise!
*/

int main() {
    std::cout.precision(2);
    std::cout << std::fixed;
    
    // can't create Account objects any more, they contain pure virtual function
    
    // Savings 
    
    SavingsAccount *s1 = new SavingsAccount {};
    SavingsAccount *s2 = new SavingsAccount {"Superman"};
    SavingsAccount *s3 = new SavingsAccount {"Batman", 2000};
    SavingsAccount *s4 = new SavingsAccount {"Wonderwoman", 5000, 5.0};
    
    
    // vector needs to hold *Account objects, else we can't use the AccountUtil functions
    // These expect base class objects!
    std::vector<Account *> sav_accounts;
    sav_accounts.push_back(s1);
    sav_accounts.push_back(s2);
    sav_accounts.push_back(s3);
    sav_accounts.push_back(s4);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
   
   
   // Checking
    
    CheckingAccount *c1 = new CheckingAccount {};
    CheckingAccount *c2 = new CheckingAccount {"Kirk"};
    CheckingAccount *c3 = new CheckingAccount {"Spock", 2000};
    CheckingAccount *c4 = new CheckingAccount {"Bones", 5000};
    
    
    
    std::vector<Account *> check_accounts {c1, c2, c3, c4};

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
    
    TrustAccount *t1 = new TrustAccount {};
    TrustAccount *t2 = new TrustAccount {"Athos", 10000, 5.0};
    TrustAccount *t3 = new TrustAccount {"Porthos", 20000, 4.0};
    TrustAccount *t4 = new TrustAccount {"Aramis", 30000};
    
    
    std::vector<Account *> trust_accounts {t1, t2, t3, t4};

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    

    
    return 0;
}