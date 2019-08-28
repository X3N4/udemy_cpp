#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

#include <cmath>
#include <ctime>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1 (int num){
    num = 1000;
}

void pass_by_value2 (string s){
    s = "Changed";
}

void pass_by_value3 (vector<string> v){
    v.clear();
}

void print_vector (vector<string> v){
    for (auto s: v){
        cout << s << " ";
    }
    cout << endl;
}

int main(){
    int num {10};
    
    cout << "The value of num is " << num << endl;
    pass_by_value1(num);
    cout << "The value of num is " << num << endl;
    
    string name {"Frank"};
    
    cout << "The value of name is " << name << endl;
    pass_by_value2(name);
    cout << "The value of name is " << name << endl;
    
    vector<string> cats {"Oscar", "Elvis", "Jacky"};
    
    cout << "The cats are ";
    // cannot be chained as print_vector returns void!!
    print_vector(cats);
    pass_by_value3(cats);
    cout << "The cats are ";
    print_vector(cats);
    
    
    return 0;
    
}