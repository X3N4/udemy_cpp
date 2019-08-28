#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    int num1 {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num1;
    
    while (num1>0){
        cout << num1 << endl;
        --num1;
    }
    cout << "Blastoff!" <<endl;
    
    int num2 {};
    cout << "Enter a positive integer to count up to: ";
    cin >> num2;
    
    int i {1};
    while (i<=num2){
        cout << i << endl;
        ++i;
    }
    
    int number {};
    cout << "Enter a number less than 100: ";
    cin >> number;
    
    while (number >= 100){
        cout << "Enter a number less than 100: ";
        cin >> number;
    }
    
    cout << "Thanks!" << endl;
    
    number = 0;
    // important to set flag correctly before loop
    bool done {false};
    while (!done){
        cout << "Enter a number between 1 and 5: ";
        cin >> number;
        if ( (number > 5) || (number < 1) )
            cout << "Out of range, try again!" << endl;
        else {
            // need to break out here, set flag correctly!
            done = true;
            cout << "Thanks!" << endl;
        }
    }
    
    
    return 0;
    
}