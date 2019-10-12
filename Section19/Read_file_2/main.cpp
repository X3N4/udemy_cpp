#include <iostream>
#include <fstream>
#include <iomanip>


int main(){
    std::ifstream in_file;
    std::string name;
    int num1 {};
    double num2 {};
    
    in_file.open("../test.txt"); // need to go one level above due to codelite
    if (!in_file){
        std::cerr << "Could not open file." << std::endl;
        std::exit(1); // properly terminate main in case of error
    } else {
        // instead of while(!in_file.eof())
        //                  in_file >> name >> num1 >> num2
        // Below is cleaner
        while (in_file >> name >> num1 >> num2){
            std::cout << std::setw(10) << std::left << name
                      << std::setw(10) << num1
                      << std::setw(10) << num2
                      << std::endl;
        }
        in_file.close();
    }
    
    return 0;
    
}