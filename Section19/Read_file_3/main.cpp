#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){
    std::ifstream in_file;
    
    
    in_file.open("../poem.txt");
    if(!in_file){
        std::cerr << "Couldn't open file" << std::endl;
        std::exit(1);
    } else {
        std::string line;
        while (std::getline(in_file, line)) {
            std::cout << line << std::endl;
        }
    }
    
    in_file.close();
    
    return 0;
    
}