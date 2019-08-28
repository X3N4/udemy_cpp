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
    std::string get_name () {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player() {cout << "Destructor called for " << name << endl;}
};


Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        cout << "Called a three args constructor for " << name << endl;
}

//: name {source.name}, health {source.health}, xp {source.xp}
//Using a delegation + copy constructor makes code clear and elegant
Player::Player(const Player &source)
    : Player {source.name, source.health, source.xp}{
        cout << "We copied the player " << source.name << endl;
    }

// makes local copy of passed argument
// destroys it again after function is done
void display_player(Player p){
    // Use getters here!
    cout << "Player name: " << p.get_name() << endl;
    cout << "Player health: " << p.get_health() << endl;
    cout << "Player xp: " << p.get_xp() << endl;
}

int main(){
    
    Player empty {"XXXXX", 100, 50};
    Player my_new_obj {empty};
    display_player(empty);
    Player hero {"Hero", 100};
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
    
}