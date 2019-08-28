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
    // declare method as const after Parameter list
    std::string get_name () const {return name;}
    // Single prototype with default values
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
};

// Use single constructor for all initialization options
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
}

void display_player_name (const Player &p){
    cout << p.get_name() << endl;
}

int main(){
    const Player villain {"Villain", 200, 13};
    Player hero {"Hero", 150, 11};
    cout << hero.get_name() << endl;
    // display_player_name(hero); still throws error as p is passed in as const reference->need to change method
    display_player_name(villain);
    
    return 0;
    
}