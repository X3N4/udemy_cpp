#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
// make attributes privat. Notice the lack of intendation
private:
    string name {"Player"};
    int health {};
    int xp {};
// methods are public and can be used to interface with the object
public:
    void talk (string text_to_say) {cout << name << " says " << text_to_say<< endl;}
    bool is_dead();
};

int main(){
    Player frank;
//    frank.name = "Frank"; // error
//    cout << frank.health << endl; // also error! private attributes can't be accessed at all
    frank.talk("Sup!");
    
    return 0;
    
}