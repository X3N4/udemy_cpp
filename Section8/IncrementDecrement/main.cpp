/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num          immediately increase variable before all following operations
    Postfix      num++      increase variable after all operations are performed
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    int counter {10};

    // 10
    cout << "Counter is " << counter << endl;
    // 11
    counter = counter + 1;
    cout << "Counter is " << counter << endl;
    // 12
    counter++;
    cout << "Counter is " << counter << endl;
    // 13
    ++counter;
    cout << "Counter is " << counter << endl;
    cout << "----------------------------" << endl;
    
    counter = 10;
    int result {0};
    cout << "\nCounter is " << counter << endl;
    // result 11, counter 11
    result = ++counter; // increases counter BEFORE assignment happens due to prefix notation
    cout << "Counter is " << counter << endl;
    cout << "Result is " << result << endl;
    cout << "----------------------------" << endl;
    
    counter = 10;
    result = 0;
    cout << "\nCounter is " << counter << endl;
    // result 10, counter 11
    result = counter++; // increases counter AFTER the assignment due to postfix notation
    cout << "Counter is " << counter << endl;
    cout << "Result is " << result << endl;
    cout << "----------------------------" << endl;
    
    counter = 10;
    result = 0;
    cout << "\nCounter is " << counter << endl;
    // result 21, counter 11
    result = ++counter + 10; // increases counter AFTER the assignment due to postfix notation
    cout << "Counter is " << counter << endl;
    cout << "Result is " << result << endl;
    cout << "----------------------------" << endl;
    
    counter = 10;
    result = 0;
    cout << "\nCounter is " << counter << endl;
    // result 20, counter 11
    result = counter++ + 10; // increases counter AFTER the assignment due to postfix notation
    cout << "Counter is " << counter << endl;
    cout << "Result is " << result << endl;
    cout << "----------------------------" << endl;
    
    
    
    counter = 10;
    result = 0;
    result = ++counter + 10;
    
    counter = 10;
    result = 0;
    result = counter++;
    
    return 0;
    
}