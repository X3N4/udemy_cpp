#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int *int_ptr {nullptr};
    
    // allocate heap storage
    int_ptr = new int;
    
    cout << int_ptr << endl;
    
    // always have to free up heap storage manually!
    delete int_ptr;
    
    size_t size {0};
    double *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;
    
    // allocate array of doubles with respective size through pointer
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl; // show address of first array element
    
    // free up heap memory used by array
    delete [] temp_ptr;
    
    return 0;
    
}