#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

#include <cmath>
#include <ctime>


using namespace std;

// const array argument in print function prevents accidental changes to the array
void print_arr (const int arr[], size_t size);
void set_arr (int arr[], size_t size, int value);

void print_arr (const int arr[], size_t size) {
    for (size_t i {};i<size;++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_arr (int arr[], size_t size, int value) {
    for (size_t i {};i<size;++i)
        arr[i] = value;
}

int main(){
    int my_scores[] {100, 98, 90,86, 84};
    
    print_arr(my_scores, 5);
    set_arr(my_scores, 5, 100);
    print_arr(my_scores, 5);
    
    return 0;
    
}