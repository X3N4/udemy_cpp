#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <Mystring.h>

using namespace std;

int main(){
    cout << boolalpha << endl;
    
    Mystring oscar("Oscar");
    Mystring simba("Simba");
    
    Mystring cat = oscar;
    
    cout << (oscar == simba) << endl;
    cout << (oscar == cat) << endl;
    
    oscar.display();
    Mystring oscar2 = -oscar;
    oscar2.display();
    
    Mystring cats = oscar + "Simba";
    
    Mystring two_cats = simba + " " + "Oscar";
    two_cats.display();
    
    Mystring three_cats = simba + " " + oscar + " " + "Nero";
    three_cats.display();
    
    return 0;
    
}