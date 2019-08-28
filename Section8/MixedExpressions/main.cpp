#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    // initialize three variables to 0
//     int num1 {}, num2 {}, num3 {};
    
    vector <int> some_ints (3);    
    cout << "Please enter three integers seperated by spaces: ";
    cin >> some_ints.at(0) >> some_ints.at(1) >> some_ints.at(2);
    cout << "Your integers are " << some_ints.at(0) << ", " 
                                 << some_ints.at(1) << " and "
                                 << some_ints.at(2) << "." << endl;
    int int_sum {some_ints.at(0) + some_ints.at(1) + some_ints.at(2)};
    cout << "\nThe sum of your integers is " << int_sum << endl;
    cout << "\nThe average of your integers is " << static_cast<double>(int_sum) /some_ints.size() << endl;
    
    
    return 0;
    
}