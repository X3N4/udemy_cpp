#pragma once
#include <string>

class Player 
{
private:
    static int num_players;
    std::string name {"Player"};
    int health {};
    int xp {};


public:
    std::string get_name () {return name;}
    int get_health () {return health;}
    int get_xp () {return xp;}
    static int get_num_players();
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
    Player(const Player &source);
    ~Player();
};
