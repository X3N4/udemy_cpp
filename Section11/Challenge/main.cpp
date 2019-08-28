// Section 11
// Challenge 
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/



#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Prototypes
void display_menu();
char get_input();
void display_list(const vector<int> list);
void add_int (vector<int> &list);
void print_mean(const vector<int> &list);
void print_smallest(const vector<int> &list);
void print_largest(const vector<int> &list);
void quit_program(bool &flag);


// Functions
void display_menu(){
    cout << "-----------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}


char get_input(){
    char user_input {};
    cin >> user_input;
    return tolower(user_input);
}

// Displays the vector or shows it's empty
void display_list(const vector<int> list){
    if (list.size() == 0)
        cout << "[] - the list is empty" << endl;
    else {
        cout << "[ ";
        for (auto item: list) {
            cout << item << " ";
        }
        cout << "]" << endl;
    }
}

// Adds an integer to the list
void add_int (vector<int> &list){
    int add_to_list {};
    cout << "Please enter an integer to add to the list: ";
    cin >> add_to_list;
    list.push_back(add_to_list);
}

// Calculate mean
void print_mean(const vector<int> &list){
    if (list.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else {
        double sum {};
        for (auto value: list){
            sum += value;
        }
        cout << "The mean of the list is " << sum/list.size() << endl;
    }
}

// Display the smallest element
void print_smallest(const vector<int> &list){
    if (list.size() == 0)
        cout << "Unable to determine the smallest number - list is empty" << endl;
    else {
        int minimum {list.at(0)};
        for (unsigned i {1}; i < list.size(); ++i){
            if (list.at(i) < minimum)
                minimum = list.at(i);
        }
        cout << "The smallest number is " << minimum << endl;
    }
}

// Display the largest element
void print_largest(const vector<int> &list){
    if (list.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else {
        int maximum {list.at(0)};
        for (unsigned i {1}; i < list.size(); ++i){
            if (maximum < list.at(i))
                maximum = list.at(i);
        }
        cout << "The largest number is " << maximum << endl;
    }
}

// Quit Program
void quit_program(bool &flag){
    cout << "Goodbye!" << endl;
    flag = false;
}

// Continue Program

int main(){

    bool flag {true};
    // needs to be declared outside loop! Else it's always reset to empty with each iteration
    vector <int> list;

    do {
        
        display_menu();
        char user_input {get_input()};

        switch (user_input) {
            case 'p': display_list(list);  break;
            case 'a': add_int(list); break;
            case 'm': print_mean(list) ;break;
            case 's': print_smallest(list) ;break;
            case 'l': print_largest(list) ;break;
            case 'q': quit_program(flag); break;
            default:{
            cout << "Unknown selection, please try again" << endl;
            continue;
            }
        } 
    } while (flag);

    return 0;
}