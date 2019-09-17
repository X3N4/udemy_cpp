#include <iostream>

double calculate_kml(const int &km, const int &liters ){
    if (liters == 0)
        // not caught exception terminates program
        throw 0;
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
    } catch (int &ex) {
        std::cerr << "Don't divide by 0." << std::endl;
    }
    return 0;
    
}