#include <iostream>

/*
 * Compiles without error
 * Throws error as soon as we try to build
 * Because we reference something that doesn't exist (the int x)
 */
 
extern int x;

int main(){
    std::cout << "Hello World" << std::endl;
    std::cout << x;
    return 0;
    
}