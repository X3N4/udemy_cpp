#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    vector <char> vowels {'a','i','e','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    // Python style reverse indexing with -1 doesn't work
    
    double hi_temps [] {90.1, 30.2, 77.7, 66.6, 100.5};
    hi_temps[0] = 133.7;
    cout << "The temperature high in January was: " << hi_temps[0] << endl;
    
//    vector <int> test_scores (3); // vector with 3 elements all initialized to zero
//    vector <int> test_scores (100, 0); // vector with 100 elements all initialized to zero
    vector <float> test_scores {1.3, 1.0, 1.7};
    cout << "Test scores using array indexing syntax" << endl;
    cout << "\nFirst Score: " << test_scores[0] << endl;
    cout << "Second Score: " << test_scores[1] << endl;
    cout << "Third Score: " << test_scores[2] << endl;
//    cout << "Fourth Score: " << test_scores[3] << endl; // no bounds checking    

    
    cout << "Test scores using vector indexing syntax" << endl;
    cout << "\nFirst Score: " << test_scores.at(0) << endl;
    cout << "Second Score: " << test_scores.at(1) << endl;
    cout << "Third Score: " << test_scores.at(2) << endl;
    // cout << "Fourth Score: " << test_scores.at(3) << endl; // throws exception during runtime
    cout << "There are " << test_scores.size() << " scores in the vector." << endl;
    
    cout << "\nEnter 3 scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nFirst Score: " << test_scores.at(0) << endl;
    cout << "Second Score: " << test_scores.at(1) << endl;
    cout << "Third Score: " << test_scores.at(2) << endl;
    
    float new_score {0};
    cin >> new_score;
    test_scores.push_back(new_score);
    
    cout << "\nFirst Score: " << test_scores.at(0) << endl;
    cout << "Second Score: " << test_scores.at(1) << endl;
    cout << "Third Score: " << test_scores.at(2) << endl;
    cout << "Fourth Score: " << test_scores.at(3) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector." << endl;
    
    // 2D vector
    vector <vector<int>> movie_ratings
    {
        {1,2,4,3},
        {2,3,1,4},
        {1,4,5,5}
    };
    
    cout << "\nHere are the movie ratings for reviewer 3" << endl;
    // We cannot index only by first index -> will throw error
    cout << movie_ratings.at(2).at(0) << endl; 
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;
    cout << "The vector movie ratings is of size " << movie_ratings.size() << endl;
    
    return 0;
    
}