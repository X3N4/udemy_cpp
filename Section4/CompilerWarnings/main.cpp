#include <iostream>

int main(){
    // Generates Warning because we declare and assign variable, but don't use  it
    int fav_num;
    fav_num = 123;
    std::cout << fav_num << std::endl;
    return 0;
}