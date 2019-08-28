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
    int num_items {};
    
    cout << "How many data items do you have?";
    cin >> num_items;
    
    vector <int> data {};
    
    for (int i {1}; i <= num_items; ++i){
        // Note that we do have to read the data item in first before we can do a push_back
        int data_item {};
        cout << "Enter your " << i << "th data item: ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\n------------------------" << endl;
    cout << "Histogram of your data" << endl;
    for (auto element: data){
        for (int i {}; i < element; ++i){
            if (i%5 == 0)
                cout << "#";
            else
                cout << "|";
        }
        cout << endl;
    }
    
    
    return 0;
    
}