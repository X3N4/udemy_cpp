#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    char vowels [] {'a','i','e','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    // Python style reverse indexing with -1 doesn't work
    
    double hi_temps [] {90.1, 30.2, 77.7, 66.6, 100.5};
    hi_temps[0] = 133.7;
    cout << "The temperature high in January was: " << hi_temps[0] << endl;
    
    // elements of uninitialized arrays contain junk
    int test_scores [5] {};
    cout << "\nFirst Score: " << test_scores[0] << endl;
    cout << "Second Score: " << test_scores[1] << endl;
    cout << "Third Score: " << test_scores[2] << endl;
    cout << "Fourth Score: " << test_scores[3] << endl;
    cout << "Fifth Score: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 scores" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe new scores are: " << endl;
    cout << "\nFirst Score: " << test_scores[0] << endl;
    cout << "Second Score: " << test_scores[1] << endl;
    cout << "Third Score: " << test_scores[2] << endl;
    cout << "Fourth Score: " << test_scores[3] << endl;
    cout << "Fifth Score: " << test_scores[4] << endl;
    
    cout << "The value of the array name is " << test_scores << endl;
    
    return 0;
    
}