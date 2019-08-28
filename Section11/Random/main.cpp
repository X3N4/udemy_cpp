#include <iostream>
#include <vector>
#include <iomanip>

#include <cmath>
#include <ctime>

using namespace std;

int main(){
    int random_number {};
    size_t count {10};
    int upper {6};
    int lower {1};
    
    
    
    cout << "Rand max on my system is " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for (size_t i {}; i <= count; ++i){
        random_number = rand() % (upper - lower +1 ) + lower;
        cout << random_number << endl;
    }
    
    return 0;
    
}