#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    const int target {10};
    
    int num {};
    cout << "Enter a number and  I'll compare it to " << target << ":" << endl;
    cin >> num;
    
    if (num >= target){
        cout << num << " is greater than or equal to the target." << endl;
        int diff {num - target};
        cout << "Num is " << diff << " greater than the target." << endl;
    } else {
        cout << num << " is smaller than the target." << endl;
        int diff {target - num};
        cout << "Num is " << diff << " smaller than the target." << endl;
    }
    
    return 0;
    
}