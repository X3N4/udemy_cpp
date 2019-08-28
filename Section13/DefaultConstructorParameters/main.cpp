#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name;
    int health {};
    int xp {};


public:
    void set_name (string name_val) {name = name_val;}
    std::string get_name () {return name;}
    // Single prototype with default values
    Player(std::string name="None", int health=0, int xp=0);
};

// Use single constructor for all initialization options
Player::Player(std::string name, int health, int xp)
    : name {name}, health {health}, xp {xp} {
        cout << "We just have one single constructor" << endl;
}


int main(){
    
    Player empty;
    Player hero {"Hero", 100};
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
    
}