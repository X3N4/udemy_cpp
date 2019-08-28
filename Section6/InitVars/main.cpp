#include <iostream>

using namespace std;

int main(){
    int age;
    
    /* it's best practice to initialize every variable to something
     * it's also best practice to declare a variable only here, not at the top */
    cout << "Please enter length and width of the room: " << endl;
    double room_length {0};
    double room_width {0};
    cin >> room_length >> room_width;
    cout << "This room's area is: " << room_length*room_width << endl;
    
    return 0;
    
}