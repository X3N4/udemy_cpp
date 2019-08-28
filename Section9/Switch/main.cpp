#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    char grade {};
    cout << "Enter the grade you expect on the exam: ";
    cin >> grade;
    // use std::tolower and toupper to convert the grade into lower/upper letters
    // this way you can catch both lower case and upper case inputs
    // 
    
    grade = std::toupper(grade);
    
//    grade = std::tolower(grade);
    
    int points_needed {};
    switch (grade){
        case 'A': points_needed = 91; break;
        case 'B': points_needed = 81; break;
        case 'C': points_needed = 71; break;
        case 'D': points_needed = 61; break;
        case 'F': {
            // needs a code block as we declare a variable and have an if-else
            char confirm {};
            cout << "Are you really sure (y/n)? Please confirm ";
            cin >> confirm;
            confirm = std::tolower(confirm);
            if (confirm == 'y')
                cout << "OK, I guess you don't like to learn something..." << endl;
            else if (confirm == 'n')
                cout << "Good, go study!" << endl;
            else
                cout << "Illegal choice!" << endl;
                    
            // break statement in this case is at the end of a block!
            break;
        }
        default:
            cout << "Sorry, that's not a valid grade!" << endl;
        
    }
    cout << "You need at least " << points_needed << " points to achieve a grade of " << grade << endl;  
    
    return 0;
    
}