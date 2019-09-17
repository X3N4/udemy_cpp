#include <iostream>
#include <string>

// user defined exception classes
// have no methods or attributes, could be defined here
class DivideByZeroException {};
class NegativeValueException {};


double calculate_kml(const int &km, const int &liters ){
    if (liters == 0)
        // not caught exception terminates program
        throw DivideByZeroException{};
    if (km < 0|| liters < 0)
        // Can't be of the same type as other exception, else we can't handle
        throw NegativeValueException{};
    
    return static_cast<double>(km)/liters;
}

int main(){
    int km {};
    int liters {};
    double kml {};
    
    std::cout << "Enter km: ";
    std::cin >> km;
    std::cout << "Enter liters: ";
    std::cin >> liters;
    
    try {
        kml = calculate_kml(km, liters);
        std::cout << "Result: " << kml << std::endl;
    } catch (const DivideByZeroException &ex) {
        // could call exception attributes here if exception had them
        std::cerr << "Don't divide by 0." << std::endl;
    } catch (const NegativeValueException &ex) {
        std::cerr << "Don't use negative values." << std::endl;
    }
    return 0;
    
}