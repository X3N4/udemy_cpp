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
    
    for (int i {1}; i<=10; i++){
        for (int j {1}; j<=10; j++){
            cout << i << "*" << j << " = " << i*j << endl;
        }
        cout << "---------------" << endl;
    }
    
    cout << endl;
    return 0;
    
}