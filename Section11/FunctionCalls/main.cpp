#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

void func2(int &x, int y, int z);
int func1(int a, int b);

// result is changed inplace because of &x
void func2(int &x, int y, int z){
    x += z + y;
}

int func1(int a, int b) {
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main(){
    int x {10};
    int y {20};
    int z {};
    z = func1(x, y);
    cout << z << endl;
    
    return 0;
    
}