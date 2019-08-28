#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n){
    if (n<=1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
    }

int main(){
    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    return 0;
    
}