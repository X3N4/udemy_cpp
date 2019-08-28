#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

// notice the star has to be BEFORE the variable name
void swap(int *a, int *b);
void swap(int *a, int *b){
    int temp {*a};
    *a = *b;
    *b = temp;
}

int main(){
    int x {100}, y {200};
    cout << "\nx " << x << endl;
    cout << "y " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx " << x << endl;
    cout << "y " << y << endl;
    
    return 0;
    
}