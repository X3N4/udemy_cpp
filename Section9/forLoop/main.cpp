#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    for (int i {0}; i<10; i++)
        cout << i << endl;
    
    /*  increment by two 
        last expression can be anything valid
        similarly the condition can be any boolean condition */
    for (int i {0}; i<10; i+=2)
        cout << i << endl;
    
    // decrements are also possible
    for (int i {10}; 0<i; i--)
        cout << i << endl;
    
    // nesting for loops and if statements
    for (int i {10}; i<=100; i+=10)
        if (i%15 == 0)
            cout << i << " Blastoff!" << endl;
    
    // using combined expressions with comma to create complex for loops
    // {} if loop body has more than one statement!
    for (int i{0},j{1}; i<5 || j<5; i++, j++){
        cout << "Value of i " << i << endl;
        cout << "Value of j " << j << endl;
    }
        
    for (int i{1}; i<=100; i++){
        // conditional operator cannot return statements of different types!
        cout << i << ( (i%10 == 0) ? ("\n"):(" "));
    }
    
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned int i{}; i<nums.size(); i++)
        cout << nums.at(i) << endl;
    
    return 0;
    
}