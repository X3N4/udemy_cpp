#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

#include <cmath>
#include <ctime>


using namespace std;

// Prototype
 
// default arguments are specified in the prototype
double calc_cost (double base_cost, double tax_rate=0.06, double shipping_cost=3.50);


// no default arguments in the function definition
double calc_cost(double base_cost, double tax_rate, double shipping_cost){
    return base_cost*(1 + tax_rate) + shipping_cost;
}

int main(){
    
    double cost {};
    
    cout << fixed << setprecision(2);
    
    cost = calc_cost(100, 0.08, 4.25);
    cout << "The costs are " << cost << endl;
    
    cost = calc_cost(100, 0.08);
    cout << "The costs are " << cost << endl;
    
    cost = calc_cost(200);
    cout << "The costs are " << cost << endl;
    
    
    return 0;
    
}