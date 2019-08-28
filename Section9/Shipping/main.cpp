/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    const int max_dim {10};
    const float base_cost {2.50};
    const float large_size {100};
    const float extra_large_size {500};
    const float large_charge {1.10};
    const float extra_large_charge {1.25};
    // alternative is to assign three seperate integers int length {}, width {}, height {};
    vector <int> dimensions (3);
    
    cout << "Please enter the length, width and height of your package seperated by spaces: ";
    cin >> dimensions.at(0) >> dimensions.at(1) >> dimensions.at(2);
    
    if ((dimensions.at(0) > max_dim) || (dimensions.at(1) > max_dim) || (dimensions.at(2) > max_dim))
        cout << "Sorry, your parcel is too large." << endl;
    else if ((dimensions.at(0) < 0) || (dimensions.at(1) < 0) || (dimensions.at(2) < 0))
        cout << "Sorry, your dimensions have to be valid." << endl;
    else {
        // set rounding for float output
        
        cout << std::fixed << std::setprecision(2);
        
        // define package volume only once!
        int package_volume {dimensions.at(0)*dimensions.at(1)*dimensions.at(2)};
        if (package_volume > extra_large_size)
            cout << "Your parcel is extra large. The price for packages this size is " << base_cost*extra_large_charge << "." << endl;
        else if (package_volume > large_size)
            cout << "Your parcel is large. The price for packages this size is " << base_cost*large_charge << "." << endl;
        else
            cout << "The price for standard packages is " << base_cost << "." << endl;
    }
    
    return 0;
    
}