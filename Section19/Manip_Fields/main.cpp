#include <iomanip>
#include <iostream>


void ruler() {
    std::cout << "\n123456789012345678901234567890123456789012345678901234567890" << std::endl;
}

int main(){
    int num1 {1234};
    double num2 {1234.5678};
    std::string hello {"Hello"};
    
    // Defaults
    std::cout << "\n-------------------------Defaults------------------------" << std::endl;
    ruler();
    std::cout << num1
              << num2
              << hello
              << std::endl;
    
    // Defaults - one per line
    std::cout << "\n-------------------------One per line------------------------" << std::endl;
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;
    std::cout << std::endl;
    
    // Right justification for these
    std::cout << "\n-------------------------width 10 num 1------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) <<  num1
              << num2
              << hello
              << std::endl;
              
    std::cout << "\n-------------------------width 10 num 1, num2------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) <<  num1
              << std::setw(10) << num2
              << hello
              << std::endl;
              
    std::cout << "\n-------------------------width 10 for all, right just by default------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) <<  num1
              << std::setw(10) << num2
              << std::setw(10) << hello
              << std::endl;
    
    
    // Setfill to *
    // Setfill is persistent
    // Works only with setw
    std::cout << std::setfill('*');
    std::cout << "\n-------------------------width 10 for all, left just------------------------" << std::endl;
    ruler();
    // setlifts for clarity
    std::cout << std::left << std::setw(10) <<  num1
              << std::left << std::setw(10) << num2
              << std::left << std::setw(10) << hello
              << std::endl;
              
    std::cout << std::endl << std::endl;
    std::cout << std::setfill('*') << std::left << std::setw(10) <<  num1
              << std::setfill('#') << std::left << std::setw(10) << num2
              << std::setfill('-') << std::left << std::setw(10) << hello
              << std::endl;
    
    return 0;
    
}