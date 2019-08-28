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
    Player(std::string name_val, int health_val, int xp_val);
};


Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        cout << "All args constructor called" << endl;
}

// following constructors delegate to the main constructor with respective values!
// Only works in initialization list, not in constructor body
Player::Player()
    : Player {"None", 0, 0} {
        cout << "No args constructor called" << endl;
}

Player::Player(std::string name_val)
    : Player {name_val, 0, 0} {
        cout << "One arg constructor called" << endl;
}




int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
    
}