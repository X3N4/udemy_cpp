#include <iostream>
#include <fstream>


int main(){
    std::ifstream in_file;
    std::string line;
    int num1 {};
    double num2 {};
    
    in_file.open("../test.txt"); // need to go one level above due to codelite
    if (!in_file){
        std::cerr << "Could not open file." << std::endl;
        std::exit(1); // properly terminate main in case of error
    } else {
        std::cout << "Reading from file..." << std::endl; // cannot use << in_file
        in_file >> line >> num1 >> num2;
        std::cout << line << std::endl;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        in_file.close();
    }
    
    return 0;
    
}