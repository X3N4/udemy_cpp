#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n){
    if ( (n==0) || (n==1) )
        return 1;
    return n*factorial(n - 1);
    }

int main(){
    cout << factorial(5) << endl;
    cout << factorial(10) << endl;
    cout << factorial(20) << endl;
    return 0;
    
}