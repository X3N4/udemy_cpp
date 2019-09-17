#include <iostream>

int main(){
    int km {};
    int liters {};
    double km_per_liter {};
    
    std::cout << "Enter km: ";
    std::cin >> km;
    std::cout << "Enter liters: ";
    std::cin >> liters;
    
    
    try {
        // have to manually throw an exception in C++
        if (liters == 0) 
            throw 0;
        km_per_liter = static_cast<double>(km)/liters;
        std::cout << "Result: " << km_per_liter << std::endl;
    }
    // reference to thrown exception (int 0)
    catch (int &ex) {
        std::cerr << "DivisionByZero error." << std::endl;
    }
    

    
    
    return 0;
    
}