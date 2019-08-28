/*
 * Carpet Cleaning service
 * Small room: 25$ per room
 * Large room: 35$ per room
 * Sales tax: 6%
 * Offers are valid for 30 days
 * */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    const float price_per_small_room {25};
    const float price_per_large_room {35};
    const float tax_rate {0.06};
    const short expiration_time {30}; // days
    
    cout << "THIS IS A CARPET CLEANING SERVICE" << endl;
    
    // better to declare variables before prompt
    int nr_of_small_rooms {0};
    cout << "\nHow many small rooms do you want to clean?" << endl;
    cin >> nr_of_small_rooms;
    
    int nr_of_large_rooms {0};
    cout << "How many large rooms do you want to clean?" << endl;
    cin >> nr_of_large_rooms;
    
    cout << "\nNumber of small rooms: " << nr_of_small_rooms << endl;
    cout << "Number of large rooms: " << nr_of_large_rooms << endl;
    // multiline statements are easily possible as statement is only ended on ;
    cout << "Price per small room: " << price_per_small_room 
         << "$.\t" << "Price per large room: " << price_per_large_room << "$." << endl;
    double pre_tax {nr_of_small_rooms*price_per_small_room + nr_of_large_rooms*price_per_large_room};
    cout << "Pre-tax costs are " << pre_tax << "$." << endl;
    cout << "Tax costs are " << pre_tax*tax_rate << "$." << endl;
    cout << "--------------------------------------" << endl;
    // it's possible to use literal numbers in C++ calculations
    cout << "Total costs are " << pre_tax*(1 + tax_rate) << "$." << endl;
    cout << "This estimate expires in " << expiration_time << " days." << endl;
    
    
    return 0;
    
}