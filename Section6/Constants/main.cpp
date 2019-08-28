/*
 * Carpet Cleaning service
 * Price: 30$ per room
 * Sales tax: 6%
 * Offers are valid for 30 days
 * */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    const float price_per_room {30}; // float so we can change price later on
    const float tax_rate {0.06};
    const short expiration_time {30}; // days
    
    cout << "THIS IS A CARPET CLEANING SERVICE" << endl;
    cout << "\nHow many rooms do you want to clean?" << endl;
    int nr_of_rooms {0};
    cin >> nr_of_rooms;
    
    cout << "\nNumber of rooms: " << nr_of_rooms << endl;
    cout << "Price per room: " << price_per_room << "$" << endl;
    cout << "Pre-tax costs are " << nr_of_rooms*price_per_room << "$." << endl;
    cout << "Tax costs are " << nr_of_rooms*price_per_room*tax_rate << "$." << endl;
    cout << "--------------------------------------" << endl;
    // it's possible to use literal numbers in C++ calculations
    cout << "Total costs are " << nr_of_rooms*price_per_room*(1 + tax_rate) << "$." << endl;
    cout << "This estimate expires in " << expiration_time << " days." << endl;
    
    return 0;
    
}