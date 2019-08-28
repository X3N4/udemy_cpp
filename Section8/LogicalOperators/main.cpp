#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << std::noboolalpha;
    
    // check within bounds
    cout << "Enter an integer. The bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    // comparisons like lower < num < upper are not possible in C++
    bool within_bounds {(lower < num) && (num < upper)};
    cout << "/nThe number is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // check outside bounds
    cout << "\nEnter an integer. The bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    bool outside_bounds {(num < lower) || (upper < num)};
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
    
    // check on bounds
    cout << "\nEnter an integer. The bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    bool on_bounds {(num == lower) || (num == upper)};
    cout << num << " is on " << lower << " or " << upper << ": " << on_bounds << endl;
    
    // Wear a coat determination
    const int temp_for_coat {15};
    const int wind_for_coat {35};
    
    double temperature {};
    cout << "Enter the current temperature in °C: ";
    cin >> temperature;
    
    int wind_speed {};
    cout << "Enter the current wind speed in km/h: ";
    cin >> wind_speed;
    
    bool wear_coat {(temperature < temp_for_coat) || (wind_for_coat < wind_speed)};
    cout << "\nYou're gonna have to wear a coat: " << wear_coat << endl;
    
    
    return 0;
    
}