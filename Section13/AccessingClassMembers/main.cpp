#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
    public:
    // attributes (can be initialized)
    string name {"Player"};
    //both are initialized to garbage when the Player class is initialized!
    int health {};
    int xp {};
    
    // methods (not yet implemented, prototypes are enough to instantiate class
    void talk (string text_to_say) {cout << name << " says " << text_to_say<< endl;}
    bool is_dead();
};

// with classes the semicolons come AFTER the curly braces!
class Account{
    public:
    string name;
    double balance;
    
    // function not returning a bool still works, but throws compiler error
    bool deposit(double amount){balance += amount; cout << "Deposit successful!" << endl;}
    bool withdraw(double amount){balance += amount;cout << "Withdrawal successful!" << endl;}
    
};

int main(){
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000;
    frank_account.withdraw(500);
    
    
    Player frank;
    // set public attributes explicitly
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there!");
    
    Player *enemy = new Player;
    (*enemy).name = "Lucky";
    (*enemy).health = 100;
    
    //using the arrow operator
    Player *enemy = new Player;
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    return 0;
    
}