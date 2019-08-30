#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include "Mystring.h"

using namespace std;

int main(){
    
    Mystring oscar {"Oscar"};
    Mystring simba {"Simba"};
    Mystring jacques;
    
    cout << "Enter the third cat's name: ";
    cin >> jacques;
    
    cout << "The three cats are " << oscar << ", " << simba << " and " << jacques << endl;
    
    cout << "\nEnter the three cats' name seperated by a space: ";
    cin >> oscar >> simba >> jacques;
    
    cout << "The three cats are " << oscar << ", " << simba << " and " << jacques << endl;
    
    return 0;
    
}