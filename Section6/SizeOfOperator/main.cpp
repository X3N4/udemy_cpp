#include <iostream>
#include <climits>
#include <cfloat>

using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "sizeof information (integer types) for this machine and compiler" << endl;
    cout << "------------------------------------------------" <<endl;
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    cout << "------------------------------------------------" <<endl;
    
    
    cout << "\nsizeof information (floating types) for this machine and compiler" << endl;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    cout << "------------------------------------------------" <<endl;
    
    cout << "\nminimum value information from climits" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    cout << "------------------------------------------------" <<endl;
    
    cout << "\nmaximum value information from climits" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: "  << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    cout << "------------------------------------------------" <<endl;
    
    cout << "\nsizeof with variables" << endl;
    int age {27};
    cout << "Size of age is " << sizeof(age) << " bytes." << endl;
    
    double wage {11.64};
    cout << "Size of wage is " << sizeof(wage) << " bytes." << endl;
    
    return 0;
    
}