#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

// Overloaded functions need a prototype for each input type!
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

// definitions of all overloaded functions
void print (int num){
    cout << "Printing integer num: " << num << endl;
}

void print (double num){
    cout << "Printing double num: " << num << endl;
}

void print (string s){
    cout << "Printing string s: " << s << endl;
}

void print (string s, string t){
    cout << "Printing string s and string t: " << s << "," << t << endl;
}

void print (vector<string> v){
    cout << "Printing a vector" << endl;
    for (auto ele: v){
        cout << "Printing Element: " << ele << endl;
        
    }
}

int main(){
    print(100);
    print('A'); // converted to ascii int 65
    
    print(123.5);
    print(123.5F); // float gets converted to double
    
    print("C-style string"); // gets converted to C++ string
    
    string s {"C++ string"};
    
    print("C-style string", s); // literal is converted to C++ string
    
    vector<string> cats {"Oscar", "Jacky", "Elvis"};
    print(cats);
    
    return 0;
    
}