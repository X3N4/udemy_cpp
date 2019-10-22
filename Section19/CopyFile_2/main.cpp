#include <string>
#include <iostream>
#include <fstream>

int main(){
    std::ifstream in_file {"../poem.txt"};
    std::ofstream out_file {"../copied_poem.txt"};
    
    if (!in_file){
        std::cerr << "Couldn't find poem.txt" << std::endl;
        std::exit(1);
    } else if (!out_file) {
        std::cerr << "Couldn't create copied_poem.txt" << std::endl;
        std::exit(2);
    } else {
        char c {};
        // get and put for character by character fetching and writing
        while (in_file.get(c)){
            out_file.put(c);
        }
    }
    
    in_file.close();
    out_file.close();
    
    return 0;
    
}