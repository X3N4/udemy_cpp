#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    int num1 {}, num2 {};
    
    // outputs all bools in alphabetic form
    cout << std::boolalpha;
    
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    
    return 0;
    
}