#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    const double dollar_per_euro = 1.19;
    
    cout << "Welcome to Euro to Dollar conversion calculator" << endl;
    cout << "\nPlease input a euro value: ";
    double euro_amount {0};
    cin >> euro_amount;
    cout << euro_amount << "€ is " << euro_amount*dollar_per_euro << "$." << endl;
    return 0;
    
}