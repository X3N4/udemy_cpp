#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


// Here it is shown how if-else statements are to be intendet by C++
int main(){
    int score {};
    cout << "Enter your score (0-100): ";
    cin >> score;
    
    char grade {};
    
    if ((0 <= score) && (score <= 100)){
        // fill with placeholder cout in case you want to test the condition
        // NOTE: Intendation has no meaning in C++, block statements do!
        if (90 < score)
            grade = 'A';
        else if (80 < score)
            grade = 'B';
        else if (70 < score)
            grade = 'C';
        else if (60 < score)
            grade = 'D';
        else
            grade = 'F';
        cout << "With a score of " << score << " you achieved a grade of " << grade << "." << endl;
        
        if (grade == 'F')
            cout << "Sorry, you gotta take this class again." << endl;
        else
            cout << "Yeah, you passed!" << endl;
    } else {
        cout << "Sorry, you entered a score that's not in the right range." << endl;
    }
    return 0;
    
}