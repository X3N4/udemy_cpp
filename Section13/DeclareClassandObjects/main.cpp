#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
    // attributes (can be initialized)
    string name {"Player"};
    //both are initialized to garbage when the Player class is initialized!
    int health {};
    int xp {};
    
    // methods (not yet implemented, prototypes are enough to instantiate class
    void talk (string);
    bool is_dead();
};

class Account{
    string name;
    double balance;
    
    bool deposit(double);
    bool withdraw(double);
    
};

int main(){
    // instantiate classes
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    // initialize enemy on the heap
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    return 0;
    
}