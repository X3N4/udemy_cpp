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
        // this keeps formatting as \n etc are also read from the file
        char c {};
        while (in_file.get(c)) {
            std::cout << c;
        }
        std::cout << std::endl;
    }
    
    in_file.close();
    
    return 0;
    
}