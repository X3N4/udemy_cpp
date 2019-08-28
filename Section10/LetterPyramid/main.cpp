#include <string>
#include <iostream>

using namespace std;

int main(){
    string str1 {};
    cout << "Please enter a string to build the letter pyramid: ";
    cin >> str1;

    size_t n {str1.size()};
    for (size_t i {0}; i < n; ++i) {
        cout << string (n - 1 - i, ' ');
        cout << str1.substr(0, i+1);
        if (i>=1) {
            for (int j{i - 1}; 0 <= j; --j) {
                cout << str1.at(j);
            }
        }
        cout << string (n - 1 - i, ' ') << endl;
    }

    return 0;

}