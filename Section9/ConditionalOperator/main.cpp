#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    int num {};
    cout << "Please enter an integer: ";
    cin >> num;
    
//    if (num%2 == 0)
//        cout << num << " is even." << endl;
//    else
//        cout << num << " is odd." << endl;
    
    // conditional operator has to be in parentheses!
    cout << num << " is " << ((num%2 == 0) ? ("even."):("odd.")) << endl;
    
    int num1 {}, num2 {};
    cout << "Please enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2){
        cout << ((num1<num2) ? ("Number 1 is smaller than number 2."):("Number 2 is smaller than number 1.")) << endl;
    } else
        cout << "The numbers are the same." << endl;
    
    return 0;
    
}