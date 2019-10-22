#include <string>
#include <iostream>
#include <fstream>

int main(){
    // Standard: Overwrite file, have to specify append
    std::ofstream file {"../output.txt", std::ios::app};
    
    if (!file){
        // Can't return path from the fstream object
        std::cerr << "Error creating output.txt" << std::endl;
        std::exit(2);
    } else {
        std::string line;
        std::cout << "Enter something to store into output.txt: ";
        std::getline(std::cin, line);
        file << line << std::endl;
    }
    
    
    file.close();
    
    return 0;
    
}