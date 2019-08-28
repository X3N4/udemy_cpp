#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    // dereferencing a pointer means following to it's memory location and accessing/using that content
    int score {100};
    int *score_ptr {&score};
    
    cout << *score_ptr << endl;
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl;
    cout << score << endl;
    
    
    cout << "\n-----------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {34.3};
    double *temp_ptr {&high_temp};
    
    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    
    cout << "\n----------------------------" << endl;
    
    string name {"Frank"};
    string *string_ptr {&name};
    
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;
    
    cout << "\n----------------------------" << endl;
    vector <string> cats {"Oscar", "Simba", "Leo"};
    vector <string> *cats_ptr {nullptr};
    
    cats_ptr = &cats;
    
    // braces around pointer dereference are needed before accessing an element
    // else will lead to a compiler error
    cout << "First cat: " << (*cats_ptr).at(0) << endl;
    cout << "Second cat: " << (*cats_ptr).at(1) << endl;
    cout << "Third cat: " << (*cats_ptr).at(2) << endl;
    
    // Can iterate over dereferenced pointer if possible just like any other collection
    cout << "\nCates" << endl;
    for (auto cat: *cats_ptr)
        cout << cat << " ";
    cout << endl;

    
    return 0;
    
}