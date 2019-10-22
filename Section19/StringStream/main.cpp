#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>


int main(){
    int age {};
    double weight {};
    std::string name {};
    
    std::string info {"Oscar 11, 4.1"};
    std::stringstream iss {info};
    
    iss >> name >> age >> weight,
    std::cout << std::setw(10) << std::left <<  name
              << std::setw(5) << age
              << std::setw(10) << weight << std::endl;
    
    
    std::cout << "\n------------------------------------" << std::endl;
    
    std::ostringstream oss {};
    oss << std::setw(10) << std::left <<  name
        << std::setw(5) << age
        << std::setw(10) << weight << std::endl;
        
    std::cout << oss.str() << std::endl;
    
    std::cout << "\n------------------------------------" << std::endl;
    
    int value {};
    std::string entry {};
    bool done {false};
    
    do {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator {entry};
        // if operation works -> validated, else continue
        if (validator >> value){
            done = true;
        } else 
            std::cout << "Sorry, that's not an integer. Please try again." << std::endl;
        
        // Ensures the stream is clean the next time we try to read (throw away unneeded stuff from buffer)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        
    } while (!done);
    
    
    
    return 0;
    
}