#include <iostream>
#include <iomanip>

int main(){
    int num {255};
    
    // Displaying different bases
    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Displaying base prefixes
    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Displaying hex in uppercase
    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << std::uppercase; // only works with hex
    std::cout << std::hex << num << std::endl;
    
    // Displaying + sign before positive decimal ints (does nothing for others) 
    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << std::showpos; // only works with decimals
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Using .setf
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);
    
    // Reset (only works with a single argument!)
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    std::cout << "\n---------------------------------" << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    std::cout << "Decimal default:  " << num << std::endl;
    
    std::cout << "Hexadecimal:  " << std::hex << num << std::endl;
    // no effect for numeric hexes
    std::cout << "Hexadecimal:  " << std::hex << std::uppercase << num << std::endl;
    std::cout << "Hexadecimal:  " << std::hex << num << std::endl;
    std::cout << "Hexadecimal:  " << std::hex << std::nouppercase << num << std::endl;
    
    std::cout << "Octal:  " << std::oct << num << std::endl;
    std::cout << "Hexadecimal:  " << std::hex << std::showbase << num << std::endl;
    std::cout << "Octal:  " << std::oct << num << std::endl;
    
    std::cout << std::endl << std::endl;
    
    return 0;
    
}