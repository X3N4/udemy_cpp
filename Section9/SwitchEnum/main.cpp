#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    // creates an own datatype limited to the range of values specified
    enum Direction {
        left,right,up, down
    };
    
    // a variable of type enum
    Direction heading {left};
    
    // compiler warning if we dont handle all cases
    switch (heading){
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default:
            cout << "Going up or down" << endl;
    }
    return 0;
    
}