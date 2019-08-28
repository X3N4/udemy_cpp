#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int num {10};
    cout << "The value of num is " << num << endl; // 10
    cout << "The size of num is " << sizeof(num) << endl; // 4 bytes
    cout << "The address of num is " << &num << endl; // mem address
    
    int *p;
    cout << "The value of p is " << p << endl; // garbage value cause not initialized
    cout << "The size of p is " << sizeof(p) << endl; // size of pointers is 8 bytes on my machine!
    cout << "The address of p is " << &p << endl; // address where p is stored
    
    p = nullptr;
    cout << "The value of p is " << p << endl;
    cout << "The size of p is " << sizeof(p) << endl;
    cout << "The address of p is " << &p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\nThe size of p1 is " << sizeof(p1) << endl;
    cout << "The size of p2 is " << sizeof(p2) << endl;
    cout << "The size of p3 is " << sizeof(p3) << endl;
    cout << "The size of p4 is " << sizeof(p4) << endl;
    cout << "The size of p5 is " << sizeof(p5) << endl;
    
    int score {10};
    double high_temp{100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score;
    cout << "\nThe value of score_ptr is " << score_ptr << endl;
    cout << "The address of score is " << &score << endl;
    return 0;
    
}