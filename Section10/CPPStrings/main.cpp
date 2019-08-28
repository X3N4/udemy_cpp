#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX, notice parantheses!

//    cout << s0 << endl; // No garbage
//    cout << s0.length() << endl; // empty string

    // Initializations
    cout << "String 1 is initialized to " << s1 << endl;
    cout << "String 2 is initialized to " << s2 << endl;
    cout << "String 3 is initialized to " << s3 << endl;
    cout << "String 4 is initialized to " << s4 << endl;
    cout << "String 5 is initialized to " << s5 << endl;
    cout << "String 6 is initialized to " << s6 << endl;
    cout << "String 7 is initialized to " << s7 << endl;

    cout << "\nComparison" << "\n-----------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ":" << (s1 == s5) << endl; // true Apple == Apple
    cout << s1 << " == " << s2 << ":" << (s1 == s2) << endl; // false Apple != Banana
    cout << s1 << " != " << s2 << ":" << (s1 != s2) << endl; // true Apple != Banana
    cout << s1 << " < " << s2 << ":" << (s1 < s2) << endl; //true Apple < Banana
    cout << s2 << " > " << s1 << ":" << (s2 > s1) << endl; // true Banana > Apple
    cout << s4 << " == " << s5 << ":" << (s4 < s5) << endl; //false apple > Apple
    cout << s1 << " == " << "Apple" << ":" << (s1 == "Apple") << endl; // true Apple == Apple

    cout << "\nAssignment" << "\n-----------------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "s3 is now: " << s3 << endl;
    s3.at(0) = 'P'; // Use this type of indexing always
    cout << "s3 is now: " << s3 << endl;

    cout << "\nAssignment" << "\n-----------------------" << endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

//    Following gives a compiler error as "nice" + "cold" cannot be added
//    Both are C style literals (would work with C++ style string inbetween)
//    s3 = "nice " + " cold " + s5 + " juice";
    cout << "\nLooping" << "\n-----------------------" << endl;
    s1 = "Apple";
    for (size_t i {0}; i<s1.length(); ++i){
        cout << s1.at(i) << endl;
    }
    for (auto letter: s1){
        cout << letter << endl;
    }

    cout << "\nSubstring" << "\n-----------------------" << endl;
    s1 = "This is a test";
    // indexing starts at 0! Starting index is inclusive
    cout << s1.substr(0,4) << endl; // This
    cout << s1.substr(5,2) << endl; // is
    cout << s1.substr(10,4) << endl; // test

    cout << "\nErase" << "\n-----------------------" << endl;
    s1 = "This is a test";
    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl;

    return 0;
    
}