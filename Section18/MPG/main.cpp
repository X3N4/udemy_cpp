#include <iostream>

int main(){
    int km {};
    int liters {};
    double km_per_liter {};
    
    std::cout << "Enter km: ";
    std::cin >> km;
    std::cout << "Enter liters: ";
    std::cin >> liters;
    
    
    if (liters != 0) {
        // Returns inf if division by 0
        km_per_liter = static_cast<double>(km)/liters;
        std::cout << "Result: " << km_per_liter << std::endl;
    } else {
        std::cerr << "DivisionByZero error." << std::endl;
    }
    
    
    return 0;
    
}