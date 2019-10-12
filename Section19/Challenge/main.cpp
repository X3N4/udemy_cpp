/*
Section 19
Challenge 2
Automated Grader

Write a program that reads a file named 'responses.txt" that contains the answer key for a quiz
as well as student responses for the quiz.

The answer key is the first item in the file.
Student1 name
Student1 responses
Student2 name
Student2 responses
. . .

Here is a sample file.

ABCDE                  
Frank                     
ABCDE                  
Larry
ABCAC
Moe
BBCDE
Curly
BBAAE
Michael
BBCDE

You should read the file and display:
Each student's name and score (#correct out of 5)
At the end, the class average should be displayed
You may assume that the data in the file is properly formatted

Program should output to the console the following:
Student                     Score 
----------------------------
Frank                             5
Larry                              3
Moe                              4
Curly                             2
Michael                         4
---------------------------
Average score            3.6
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

class SolutionResponselengthMismatch {};

struct Scorecard{
    std::string name;
    int score;
};

std::vector<Scorecard> get_scores(const std::vector<std::string> &text, const std::string &solution);
void display_scores(const std::vector<Scorecard> &vec);
int calculate_score(const std::string &response, const std::string &solution);

void display_scores(const std::vector<Scorecard> &vec){
    
    std::cout << std::left << std::setw(15) << "Student" 
              << std::right << std::setw(15) << "Score" << std::endl;
    std::cout << std::setw(31) << std::setfill('-') << ' ' << std::endl;
    std::cout << std::setfill(' ');
    
    double avg_score {};
    for (const auto &e: vec){
        avg_score += e.score;
        std::cout << std::left << std::setw(15) << e.name 
                  << std::right << std::setw(15) << e.score << std::endl;
    }
    avg_score /= vec.size();
    std::cout << std::setw(31) << std::setfill('-') << ' ' << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::left << std::setw(15) << "Average score" 
              << std::right << std::setw(15) << avg_score << std::endl;
}

std::vector<Scorecard> get_scores(const std::vector<std::string> &text, const std::string &solution){
    std::vector<Scorecard> scores;
    for (size_t i {1}; i < text.size(); i += 2){
        Scorecard score {text.at(i), calculate_score(text.at(i+1), solution)};
        scores.push_back(score);
    }
    return scores;
}

int calculate_score(const std::string &response, const std::string &solution){
    if (!(response.size() == solution.size()))
        throw SolutionResponselengthMismatch();
    int counts {};
    for (size_t i {}; i < response.length(); ++i){
        if (response.at(i) == solution.at(i))
            counts += 1;
    }
    return counts;
}

int main(){
    std::ifstream in_file;
    in_file.open("../responses.txt");
    
    if (!in_file){
        std::cerr << "Could not open file" << std::endl;
        std::exit(1);
    } else {
        std::string response;
        std::vector<std::string> responses;
        std::string solution;
        
        while (std::getline(in_file, response)){
            responses.push_back(response);
        }
        
        solution = responses.at(0);
        
        
        std::vector<Scorecard> scores {get_scores(responses, solution)};
        display_scores(scores);
    }
    
    in_file.close();
    
    return 0;
    
}