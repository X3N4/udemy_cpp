#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health {};
    int xp {};


public:
    void set_name (string name_val) {name = name_val;}
    std::string get_name () {return name;}
    // using prototypes for the constructors is possible!
    // Put constructors in C.cpp file then
    Player();
    Player(std::string name_val);
    Player(std::string name, int health, int xp);
};

// concise initialization using initializer lists
Player::Player()
    : name {"None"}, health {}, xp {} {
        // could implement more constructor code here
}

Player::Player(std::string name_val)
    : name {name_val}, health {}, xp {} {
}

Player::Player(std::string name, int health, int xp)
    : name {name}, health {health}, xp {xp} {
}


int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    cout << villain.get_name() << endl;
    
    return 0;
    
}