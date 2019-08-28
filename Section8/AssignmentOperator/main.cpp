#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    int num1 {10};
    int num2 {20};
    
    // Assignments can be chained!!
    num1 = num2 = 1000;
    
    cout << "Number 1 is " << num1 << endl;
    cout << "Number 2 is " << num2 << endl;
    
    
    cout << endl;
    
    return 0;
    
}