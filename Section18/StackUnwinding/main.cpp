#include <iostream>

void func_a();
void func_b();
void func_c();

void func_a(){
    std::cout << "Starting func_a" << std::endl;
    try {
        func_b();
    } catch (int &ex) {
        std::cout << "Caught error in function a" << std::endl;
    }
    
    std::cout << "Ending func_a" << std::endl;
}

void func_b(){
    std::cout << "Starting func_b" << std::endl;
    try {
        func_c();
    } catch (int &ex) {
        // Error is caught in function b, so everything from function b on gets processed regularly
        std::cout << "Caught error in function b" << std::endl;
    }
    
    std::cout << "Ending func_b" << std::endl;
}

void func_c(){
    std::cout << "Starting func_c" << std::endl;
    throw 100; // we terminate and don't reach ending func calls for any func except main
    std::cout << "Ending func_c" << std::endl;
}


int main(){
    std::cout << "Starting main" << std::endl;
    try {
        func_a();
    } catch (int &ex) {
        // Exception immediately terminates everything and looks for catch
        std::cout << "Caught error in main" << std::endl;
    }
    std::cout << "Main done." << std::endl;
    
    return 0;
    
}