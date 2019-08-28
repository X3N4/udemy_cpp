#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int scores[] {100,95,77};
    
    cout << "Value of scores: " << scores << endl;
    
    int *ptr_scores {scores}; // no ampersand needed; array name contains memory location
    cout << "Value of ptr_scores: " << ptr_scores << endl;
    
    cout << "\nArray subscript notation---------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "\nPointer subscript notation---------------------" << endl;
    cout << ptr_scores[0] << endl;
    cout << ptr_scores[1] << endl;
    cout << ptr_scores[2] << endl;
    
    
    // offset notation needs to be in parentheses for proper priority
    // Also we need to use dereferencing to access the elements
    // NOTE THAT THE STAR IS OUTSIDE THE PARANTHESES
    cout << "\nArray offset notation---------------------" << endl;
    cout << *(scores) << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    
    cout << "\nPointer offset notation---------------------" << endl;
    cout << *(ptr_scores) << endl;
    cout << *(ptr_scores + 1) << endl;
    cout << *(ptr_scores + 2) << endl;
    return 0;
    
}