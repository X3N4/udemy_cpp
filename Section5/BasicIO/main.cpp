/*
 * Chaining of basic input/output commands
 */

#include <iostream>

// best practice namespace imports
using std::cout;
using std::cin;
using std::endl;

int main(){
//    cout << "Hello World!" << endl;
    
//    cout << "Hello ";
//    cout << "World!" << endl;
    
    cout << "Hello" << endl << "World\n" << "What's up?" << endl;
    
    int num1;
    int num2;
    double dubs;
//    cout << "Enter some number, bro: " << endl;
//    cin >> num1;
//    cout << "Enter another number, bro: " << endl;
//    cin >> num2;
//    cout << "Gotcha numbers " << num1 << "\t" << num2 << endl;
    
    // chained cin doesn't proceed until it has both inputs
    cout << "Enter two numbers, bro: " << endl;
    cin >> num1 >> num2;
    cout << "Gotcha numbers " << num1 << "\t" << num2 << endl;
    return 0;
    
}