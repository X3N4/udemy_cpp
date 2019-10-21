/*
Section 19
Challenge 3
Word finder

Ask the user to enter a word
Process the Romeo and Juliet file and determine how many total words there are
and how many times the word the user entered appears as a substring of a word in the play.

For example.
If the user enters: love
Then the words love, lovely, and beloved will all be considered matches.
You decide whether you want to be case sensitive or not. My solution is case sensitive

Sample are some sample runs:

Enter the substring to search for: love
25919 words were searched...
The substring love was found 171 times

Enter the substring to search for: Romeo
25919 words were searched...
The substring Romeo was found 132 times

Enter the substring to search for: Juliet
25919 words were searched...
The substring Juliet was found 49 times

Enter the substring to search for: Frank
25919 words were searched...
The substring Frank was found 0 times

Have fun!
*/

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

// file cannot be const here, it changes!
std::vector<std::string> get_play (std::ifstream &file){
    std::vector<std::string> text;
    std::string word;
    // Can use normal input operator, it separates at space
    while (file >> word){
        text.push_back(word);
    }
    return text;
}

void count_words (const std::string &target, const std::vector<std::string> &text) {
    unsigned counts {};
    for (const auto &word: text){
        // Remember to also search substrings!
        if (! (word.find(target) == std::string::npos))
            ++counts;
    }
    std::cout << "Searched " << text.size() << " words and found " << target << ' ' << counts << " times." << std::endl;
}

bool check_done () {
    char answer {};
    std::cout << "Do you wish to search another word? [y/n]";
    std::cin >> answer;
    answer = std::tolower(answer);
    if (answer == 'y')
        return false;
    else
        return true;
}

int main(){
    std::ifstream in_file;
    in_file.open("../romeoandjuliet.txt");
    
    if (!in_file){
        std::cerr << "Couldn't open file" << std::endl;
        std::exit(3);
    } else {
        std::vector<std::string> text {get_play(in_file)};
        bool quit {false};
        std::string target;
        
        do {
            std::cout << "Please enter a word to count: ";
            std::cin >> target;
            
            count_words(target, text);
            
            quit = check_done();
        } while (!quit);
    }
    
    in_file.close();
    
    return 0;
    
}