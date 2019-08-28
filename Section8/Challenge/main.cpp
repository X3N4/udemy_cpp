// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    // constants for representation
    // 1 dollar is 100 cents
    // 1 quarter is 25 cents
    // 1 dime is 10 cents
    // 1 nickel is 5 cents, and
    // 1 penny is 1 cent.
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    
    // initialize to 0
    int change {};
    cout << "Enter an amount in cents: ";
    cin >> change;
    
    cout << "\nYou can provide this change as follows:" << endl;
	cout << "dollars  : " << change/dollar << endl;
    change %= dollar;
	cout << "quarters : " << change/quarter << endl;
    change %= quarter;
	cout << "dimes    : " << change/dime << endl;
    change %= dime;
	cout << "nickels  : " << change/nickel << endl;
    change %= nickel;
	cout << "pennies  : " << change << endl;
    
    
    
    return 0;
    
}