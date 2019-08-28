#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

// const keyword in this place makes DATA constant
void display (const vector<string> *v);
void display (int *array, int sentintel);

void display (const vector<string> *v){
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

void display (int *array, int sentintel){
    // have to use *array to dereference a SINGLE array element
    // we can check this vs sentintel value
    while (*array != sentintel)
        cout << *array++ << " ";
    cout << endl;
}


int main(){
    cout << "-------------------------" << endl;
    vector <string> cats {"Oscar", "Elivs", "Lucky"};
    display(&cats);
    
    cout << "---------------------------" << endl;
    int scores[] {100, 98, 97, 66, 54, -1};
    display(scores, -1);
    
    return 0;
    
}