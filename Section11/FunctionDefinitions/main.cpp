#include <iostream>
#include <vector>
#include <iomanip>

#include <cmath>
#include <ctime>

using namespace std;

// M_PI is contained in cmath and is the number pi


double calc_circle_area (double radius){
    return M_PI*pow(radius, 2);
}


void area_circle (){
    double radius {};
    cout << "Please enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_circle_area(radius) << endl;
}

double calc_cylinder_vol(double radius, double height) {
    // nesting functions to provide code readability
    return calc_circle_area(radius)*height;
}

void volume_cylinder(){
    double radius {};
    double height {};
    cout << "Please enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "The area of a cylinder with radius " << radius << " and height " << height << " is " << calc_cylinder_vol(radius, height) << endl;
}

int main(){
    
    area_circle();
    volume_cylinder();
    
    return 0;
    
}