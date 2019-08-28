#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int *create_array(size_t size, int init_val=0);
void display(const int *const array, size_t size);

int *create_array(size_t size, int init_val){
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i {0}; i < size; ++i){
        new_storage[i] = init_val;
    }
    return new_storage;
}

void display(const int *const array, size_t size){
    for (size_t i {0}; i < size; ++i){
        cout << *(array + i) << " ";
    }
    cout << endl;
}

int main(){
    // notice that we need to initialize the dynamic array before using create_array
    // this is because we need to assign the memory location to a global variable
    // else the location is lost after function execution
    int *my_arr {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many ints do you want to allocate? ";
    cin >> size;
    cout << "\nWhat value would you like them initialized to? ";
    cin >> init_value;
    
    my_arr = create_array(size, init_value);
    
    cout << endl;
    
    display(my_arr, size);
    
    delete [] my_arr;
    
    return 0;
    
}