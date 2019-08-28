#include <iostream>
#include <vector>
#include <iomanip>

#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double num {};
    cout << "Please enter a double: ";
    cin >> num;
    
    cout << "The square root of " << num << " is " << sqrt(num) << endl;
    cout << "The cuberoot of " << num << " is " << cbrt(num) << endl;
    
    
    cout << "The sine of " << num << " is " << sin(num) << endl;
    cout << "The cosine of " << num << " is " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is " << ceil(num) << endl;
    cout << "The floor of " << num << " is " << floor(num) << endl;
    cout << "The round of " << num << " is " << round(num) << endl;
    
    double power {};
    cout << "Enter a power to raise " << num << " to ";
    cin >> power;
    cout << num << " raised to the " << power << " power is " << pow(num, power) << endl;
    
    return 0;
    
}