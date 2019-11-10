// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>


std::string preprocess(const std::string& s)
{   
    
    std::string processed_string {s};
    // remove punctuation
    for (size_t i {0}; i < processed_string.size(); ++i)
    {
        if (! std::isalpha(processed_string.at(i)))
        {
            processed_string.erase(i, 1); // remove ith char from string
            --i; // reduce i with one so you don't miss any char
        }
    }
    
    // lower case everything
    std::transform(processed_string.begin(), processed_string.end(), processed_string.begin(),
                    [](unsigned char c){ return std::tolower(c); });
                    
    return processed_string;
}

bool is_palindrome(const std::string& s)
{   
    std::string processed_string {preprocess(s)};
    std::deque<char> deck(processed_string.begin(), processed_string.end());
    while (deck.size() > 1){
        if ( !(deck.front() == deck.back()) )
            return false;
        deck.pop_front();
        deck.pop_back();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}