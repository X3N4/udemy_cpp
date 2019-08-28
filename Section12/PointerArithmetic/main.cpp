#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int scores[] {100, 95, 77, 666, -1};
    int *score_ptr {scores}; // no ampersand, points to first memory location of array (== array name)
    
    // using pointer increment to iterate over an array
    while (*score_ptr != -1){
        cout <<  *score_ptr << endl;
        score_ptr++;
    }
    
    
    cout << "\n------------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1){
        // right to left associativity: first increment pointer, THEN dereference
        cout <<  *score_ptr++ << endl;
    }
    
    cout << "\n--------------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha;
    cout << p1 << "==" << p2 << " : " << (p1 == p2) << endl; // false
    cout << p1 << "==" << p3 << " : " << (p1 == p3) << endl; // true
    
    cout << *p1 << "==" << *p2 << " : " << (*p1 == *p2) << endl; // true
    cout << *p1 << "==" << *p3 << " : " << (*p1 == *p3) << endl; // true
    
    p3 = &s3; // point to James
    cout << *p1 << "==" << *p3 << " : " << (*p1 == *p3) << endl; // false
    
    cout << "\n-------------------------------------------" << endl;
    
    int *int_ptr1 {nullptr};
    int *int_ptr2 {nullptr};
    
    int_ptr1 = &scores[0]; // 100
    int_ptr2 = &scores[3]; // 666
    
    cout << "In the array scores " << ", " << *int_ptr2 << " is " << (int_ptr2 - int_ptr1) << " elements away from " << *int_ptr1 << endl;
    
    cout << "\n-------------------------------------------" << endl;
    char name[] {"Oscar"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0]; // O
    char_ptr2 = &name[3]; // a
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " elements away from " << *char_ptr1 << endl;
    
    return 0;
    
}