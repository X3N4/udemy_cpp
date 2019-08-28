#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n--------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n--------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n----------------------------" << endl;
    vector <string> cats {"Oscar", "Simba", "Leo"};
    
    for (auto str: cats)
        str = "Funny";      // changes only COPIES of str
    
    for (auto str: cats)
        cout << str << " "; // still the same
        
    cout << "\n----------------------------" << endl;
    
    for (auto &str: cats)
        str = "Funny"; // changes the original variable
    
    for (auto const &str: cats)   // use const with & to reduce memory usage
        cout << str << " ";       // vector elements have changed!
    
    
    cout << endl;
    return 0;
    
}