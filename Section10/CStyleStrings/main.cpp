#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>



using std::cout;
using std::cin;
using std::endl;

int main(){
    // initialize strings as arrays of chars
    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};

//    cout << "Please enter your first name: ";
//    cin >> first_name;
//
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------------------" << endl;
//
//    cout << "Hello, " << first_name << " your first name has " << std::strlen(first_name) << " characters" << endl;
//    cout << " and your last name, " << last_name << " has " << std::strlen(last_name) << " characters" << endl;
//    std::strcpy(full_name, first_name); // copy first_name to full_name
//    std::strcat(full_name, " "); // concatenate full_name and a space
//    std::strcat(full_name, last_name); // concatenate last_name to full name
//    cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------" << endl;
    std::strcpy(temp, full_name);

    for (size_t i{0}; i<std::strlen(full_name); i++){
        if (std::isalpha(full_name[i]))
            full_name[i] = std::toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    if(std::strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are the different." << endl;



    return 0;
    
}