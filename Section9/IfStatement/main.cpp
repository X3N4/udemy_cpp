#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    const int lower {10};
    const int upper {100};
    
    int num {};
    cout << "Please enter an integer between " << lower << " and " << upper << ": ";
    cin >> num;
    
    if (10 < num){ 
        cout << "Looks like your number is greater than " << lower << endl;
        // variable is only defined locally within the block statement
        int diff {num - lower};
        cout << "Your number is " << diff << " greater than " << lower << endl;
    }
    
    if (num < 100){ 
        cout << "Looks like your number is smaller than " << upper << endl;
        // diff has to be initialized again in the next block
        int diff {upper - num};
        cout << "Your number is " << diff << " smaller than " << lower << endl;
        
    }
    if ((10 <= num) && (num <= 100)){ 
        cout << "Looks like your number is between " << lower << " and " << upper << endl;
        cout << "This means statements 1 and 2 must also be true." << endl;
        
        
    }
    if ((10 == num) || (num == 100)){ 
        cout << "Looks like your number is exactly " << lower << " or " << upper << endl;
    }
    return 0;
    
}