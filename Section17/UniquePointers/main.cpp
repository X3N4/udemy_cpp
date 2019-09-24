#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"

class Test {
    
private:
    static constexpr int def_data {0};

    int data;
    
public:
    Test(int data=def_data) : data{data} {std::cout << "Test constructor {" << data << "}" << std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "Test destructor {" << data << "}" << std::endl;}
};


int main(){
    //raw pointers
//    Test *t1 = new Test {100};
//    delete t1;
    
    // unique pointer creation patterns
    // using new
    
    std::unique_ptr<Test> p1 {new Test {1337}};
    
    // using make_unique
    // 34 is function argument here, can't be curly
    
    std::unique_ptr<Test> p2 = std::make_unique<Test>(34);
    
    std::unique_ptr<Test> p3;
    //p3 = p1; // use of deleted function std::unique_ptr error
    p3 = std::move(p1); //works using move semantics
    if (!p1) // True if it points somewhere, false if nullptr
        std::cout << "p1 is dead" << std::endl;
        
    // simply use auto here, no need for explicit typing
    
    auto a1 = std::make_unique<CheckingAccount>("Oscar", 5000);
    
    std::cout << *a1 << std::endl;
    a1->deposit(1337); // access method like other pointers
    std::cout << *a1 << std::endl;
    
    // unique_ptrs in collections
    std::vector<std::unique_ptr<Account>> accs;
    accs.push_back(std::make_unique<CheckingAccount>("Jon", 1000));
    accs.push_back(std::make_unique<SavingsAccount>("Jim", 2000, 4.5));
    accs.push_back(std::make_unique<TrustAccount>("Jack", 3000, 3.3));
    
    // can't simply loop over objects as it will create copies
    // instead have to use a const reference!
    for (const auto &acc: accs)
        std::cout << *acc << std::endl;
    return 0;
    
}