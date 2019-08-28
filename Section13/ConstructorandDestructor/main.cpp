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
    // methods
    void set_name (string name_val) {name = name_val;}
    
    // Constructors and destructors
    // Constructor overloading allows different constructor implementations depending on the passed arguments
    // DESTRUCTORS CANNOT BE OVERLOADED
    Player(){
        cout << "No args constructor called" << endl;
    }
    Player(string name){
        cout << "String arg constructor called" << endl;
    }
    Player(string name, int health, int xp){
        cout << "Three args constructor called" << endl;
    }
    ~Player(){
        cout << "Destructor called for " << name << endl;
    }
};

int main(){
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        // Calling a constructor happens with round parentheses
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemey");
    
    // Use constructor to place object on the heap
    Player *boss = new Player("Boos", 1000, 33);
    boss->set_name("Level Boss");
    
    delete enemy;
    delete boss;
    
    return 0;
    
}