// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue


#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

/*
Section 20
Challenge 4 - Stack and Queue Challenge

A Palindrome is a string that reads the same backwards or forwards.
Simple examples are:
madam
bob
toot
radar

An entire phrase can also be a palindome, for example:
A Toyota's a toyota
A Santa at NASA
A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!

For the purposes of this assignment we will only consider alpha characters and omit all other characters.
We will also not be considering case.
So,
A Santa at Nasa, will be processed as:
ASANTAATNASA

A common method to solve this problem is to compare the string to its reverse and
if the are equal then it must be a palindrome. But we will using stack/queue.

I am providing the main driver for you which will automatically run several test cases.
You challenge is to write the following function:

bool is_palindrome(const std::string &s) {

This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.

So,

is_palindrome("A Santa at Nasa");   will return true 
is_palindrome("Hello");   will return false

Please use a stack and a queue to solve the problem.

If you need a hint, please as in the Q/A.
Good luck and have fun!
*/


bool is_palindrome(const std::string& s){
    std::stack<char> char_stack;
    std::queue<char> char_queue;
    
    for (const auto& c: s){
        if (std::isalpha(c)){
            char_stack.push(std::tolower(c));
            char_queue.push(std::tolower(c));
        }
    }
    
    while ( (!char_stack.empty()) && (!char_queue.empty()) ) {
        if ( char_stack.top() != char_queue.front())
            return false;
        char_queue.pop();
        char_stack.pop();
    }
    
    return true;
}

int main(){
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}