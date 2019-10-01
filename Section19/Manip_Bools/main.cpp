#include <iostream>
#include <iomanip>

int main(){
    
    // Standard formatting 1/0 formatting
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;
    
    // Set to true/false formatting
    std::cout << std::boolalpha;
    std::cout << "noboolalpha (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20): " << (10 == 20) << std::endl;
    
    // boolean formatting stays
    std::cout << "noboolalpha (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20): " << (10 == 20) << std::endl;
    
    // Toggle
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20): " << (10 == 20) << std::endl;
    
    // Set using setf std = namespace, ios = class, boolalpha = flag
    std::cout.setf(std::ios::boolalpha); // needs explicit call with std::ios::
    std::cout << "noboolalpha (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20): " << (10 == 20) << std::endl;
    
    // Reset, need to explicitly call the flag to be reset
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "noboolalpha (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20): " << (10 == 20) << std::endl;
    
    return 0;
    
}