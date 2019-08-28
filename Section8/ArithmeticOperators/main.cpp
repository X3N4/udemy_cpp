#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    /*
     * operators +,-,*,/ work with floats, integers doubles, etc 
     * operator % works only with integers!
     * */
    int num1 {200};
    int num2 {100};
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    
    // dividing two ints returns an int (decimal is cut off) no matter the type of result
    double result {0};
    result = num2/num1;
    cout << num2 << "/" << num1 << " = " << result << endl;
    
    return 0;
    
}