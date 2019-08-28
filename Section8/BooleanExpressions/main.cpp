#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1 {}, num2 {};
    
    // outputs all bools in alphabetic form
    cout << std::boolalpha;
    
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result for equals: " << equal_result << endl;
    cout << "Comparison result for not_equals: " << not_equal_result << endl;
    
    char char1 {}, char2 {};
    cout << "Please enter two chars: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparison result for equals: " << equal_result << endl;
    cout << "Comparison result for not_equals: " << not_equal_result << endl;
    
    double double1 {}, double2 {};
    cout << "Please enter two doubles: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparison result for equals: " << equal_result << endl;
    cout << "Comparison result for not_equals: " << not_equal_result << endl;
    
    cout << "Please enter an int and a double: ";
    cin >> num1 >> double2;
    equal_result = (num1 == double2);
    not_equal_result = (num1 != double2);
    cout << "Comparison result for equals: " << equal_result << endl;
    cout << "Comparison result for not_equals: " << not_equal_result << endl;
    
    
    return 0;
    
}