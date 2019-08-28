#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    /* *****************************
     * Character types
     ***************************** */
    char first_letter {'J'}; // have to use single quotes here!
    cout << "The first letter of my name is " << first_letter << endl;
    
    /*
     * Integers
     * */
     
     /*
      * Unsigned ints can only be positive -> store larger positive values
      * Signed ints can be positive and negative
      * */
     unsigned short exam_score {50};
     cout << "My exam score was " << exam_score << endl;
     
     int countries_represented {65};
     cout << "There were " << countries_represented << " in the council" << endl;
     
     long people_in_ger {80000000};
     cout << people_in_ger << " people live in germany." << endl;
     
     // C++14 or newer can handle tick marks in numbers to allow for easier reading!
     long people_on_earth {7'600'000'000};
     cout << "There are " << people_on_earth << " living on earth" << endl;
     
     long long distance_to_alpha_cent {9'461'000'000'000'000};
     cout << "There distance to alpha centauri is " << distance_to_alpha_cent << endl;
     
     /*
      * Floating point number 
      * */
      float car_payment {401.23};
      cout << "My car payment is " << car_payment << endl;
      
      double pi {3.14159};
      cout << "Pi is roughly" << pi << endl;
      
      // Can easily use scientific notation in C++
      long double a_lot {2e120};
      cout << "Wow, that's a large number " << a_lot << endl;
      
      /*
       * Booleans
       * */
       
       // Doesn't print out true but non-zero number instead
       bool game_over {true};
       cout << "Is the game over? " << game_over << endl;
       
       /*
        * Overflow examples
        * */
        short num1 {30000};
        short num2 {1000};
        short product {num1*num2}; // generatres compiler warning as number is too large
        
        // output will be nonsensical as product can't store the number
        cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
        
        
    
    return 0;
    
}