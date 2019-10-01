#include <iomanip>
#include <iostream>



int main(){
        
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
    
    // using defaults [6 digits]
    std::cout << "\n---------------Defaults------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(2);
    // using precision2 -> uses 2 digits and then scientific notation
    std::cout << "\n---------------Precision2------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(5);
    // using precision5 -> uses 5 digits max and scientific notation
    std::cout << "\n---------------Precision5------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(9);
    // using precision9 -> fits everything, first is rounded
    std::cout << "\n---------------Precision9------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(3) << std::fixed;
    // using precision3 -> fixes precision to be AFTER decimal point 
    std::cout << "\n---------------Precision3, fixed------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(3) << std::scientific;
    // using precision3 -> 3 decimals after point [still using fixed] and scientific notation
    std::cout << "\n---------------Precision3, scientific------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "\n---------------Precision3, fixed, showpos------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    // Reset to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // note the use of binary or to concat flags
    std::cout << std::resetiosflags(std::ios::showpos); // always have to use std::ios:: here
    
    std::cout << std::setprecision(10) << std::showpoint;
    // using precision10 -> show trailing zeros
    std::cout << "\n---------------Precision10, showpoint------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);
    // Reset to defaults
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);
    
    // using defaults [6 digits]
    std::cout << "\n---------------Defaults------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    
    return 0;
    
}