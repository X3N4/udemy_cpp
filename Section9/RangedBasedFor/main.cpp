#include <iostream>
#include <vector>
#include <iomanip> // includes iomanipulation

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    int scores [] {10,20,30};
    for (auto score: scores)
        cout << score << " ";
    cout << endl;
    
    vector <double> temperatures {12.1, 14.5, 17.1, 20.5, 16.4};
    double sum {};
    for (auto temp: temperatures)
        sum += temp;
    // combining initialization together with conditional operator
    // everything's possible in C++!!!
    double mean {((temperatures.size() != 0)  ? (sum/temperatures.size()):(0))};
    // define floating point accuracy
    cout << std::fixed << std::setprecision(1);
    cout << "The average temperature was " << mean << endl;
    
    // range based for with initialization
    for (auto i: {1,2,3,4,5})
        cout << i << endl;
        
    // range based for over string
    for (auto c: "Noemi")
        cout << c << endl;
    return 0;
    
}