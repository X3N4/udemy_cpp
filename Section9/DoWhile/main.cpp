#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::fixed;
using std::setprecision;

int main(){
    char input {};
    
    do {
        cout << "\n-----------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q: Quit" << endl << endl;
        cout << "\nEnter your selection: ";
        cin >> input;
        switch (input) {
            case '1':
                cout << "You chose 1 - Doing this" << endl;;
                break;
            case '2':
                cout << "You chose 2 - Doing that" << endl;;
                break;
            case '3':
                cout << "You chose 3 - Doing something else" << endl;;
                break;
            case 'q':
            case 'Q':
                cout << "You chose Q - Quitting" << endl;;
                break;
            default:
                cout << "Invalid input! Please provide new input." << endl;
        }
    } while ((input != 'q') && (input != 'Q')); // has to be && or else the loop will be infinite as one condition is always true!
    
    
    return 0;
    
}