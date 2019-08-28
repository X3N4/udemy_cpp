#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include "Player.h"

using namespace std;

void display_active_players(){
    // access static members/functions through class, not instance
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main(){
    display_active_players();
    Player empty;
    Player hero {"Hero", 100};
    Player frank {"Frank"};
    display_active_players();
    {
        Player villain {"Villain", 100, 55};
        display_active_players();
    }
    display_active_players();
    
    Player *enemy = new Player("Enemey", 150, 100);
    display_active_players();
    delete enemy;
    display_active_players();
    return 0;
    
}