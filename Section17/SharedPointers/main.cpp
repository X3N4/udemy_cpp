#include <iostream>
#include <memory>
#include <vector>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"


class Test {
    
private:
    static constexpr int def_data {0};

    int data;
    
public:
    Test(int data=def_data) : data{data} {std::cout << "Test constructor {" << data << "}" << std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "Test destructor {" << data << "}" << std::endl;}
};

void func(std::shared_ptr<Test> p) {
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main(){
    
    /*
    // shared pointers simple example
    auto p1 = std::make_shared<int>(100);
    std::cout << "Use count: " << p1.use_count() << std::endl;
    
    std::shared_ptr<int> p2 {p1};
    std::cout << "Use count: " << p1.use_count() << std::endl;
    
    p1.reset();
    std::cout << "Use count: " << p1.use_count() << std::endl;
    std::cout << "Use count: " << p2.use_count() << std::endl;
    */
    
    /*
    auto p1 = std::make_shared<Test>(100);
    func(p1); // object gets created inside func scope and then destroyed
    std::cout << "Use count: " << p1.use_count() << std::endl;
    
    {
        std::shared_ptr<Test> p2 = p1;
        std::cout << "Use count: " << p1.use_count() << std::endl;
        {
            std::shared_ptr<Test> p3 = p1;
            std::cout << "Use count: " << p1.use_count() << std::endl;      
            p1.reset();
        }
        std::cout << "Use count: " << p1.use_count() << std::endl;      

    }
    std::cout << "Use count: " << p1.use_count() <<std:: endl;
    */
    
    auto acc1 = std::make_shared<TrustAccount>("Oscar", 1337, 3.4);
    auto acc2 = std::make_shared<CheckingAccount>("Jacques", 4000);
    auto acc3 = std::make_shared<SavingsAccount>("Simba", 7000);
    
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    
    for (const auto &acc: accounts){
        std::cout << *acc << std::endl;
        // Use count is always two because copies are pushed back into the vector
        // vector has shared ownership
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    
    return 0;
    
}