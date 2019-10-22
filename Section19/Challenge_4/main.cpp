#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

class InFileError: public std::exception {
    virtual const char *what () const throw() {
        return "Input file path could not be found.";
    }
};

class OutFileError: public std::exception {
    virtual const char *what () const throw() {
        return "Could not find output file.";
    }
};

int main(){
    std::ifstream in_file {"../romeoandjuliet.txt"};
    std::ofstream out_file {"../romeoandjuliet_n.txt"};
    
    if (!in_file){
        throw InFileError();
    } else if (!out_file){
        throw OutFileError();
    } else {
        std:: string line {};
        unsigned counter {};
        std::ostringstream oss {};
        
        while (std::getline(in_file, line)) {
            oss << std::setw(10) << std::left << counter << line << std::endl;
            out_file << oss.str();
            
            // reset oss and increment
            oss.str("");
            oss.clear();
            ++counter;
        }
        
        std::cout << "Done copying poem." << std::endl;
    }
    
    in_file.close();
    out_file.close();
    
    return 0;
    
}