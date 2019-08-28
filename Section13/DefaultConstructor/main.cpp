#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;


public:
    void set_name (string name_val) {name = name_val;}
    std::string get_name() {return name;}
    // own no args constructor which initializes object values
    // best practice to declare this to prevent garbage data attributes
    Player () {
        name = "None";
        health = 3;
        xp = 3;
    }
    
    Player (std::string name_val, int health_val, int xp_val) {
        // it's not possible to overload variable names here
        // arguments have to have a different name than attributes!!!
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};


int main(){
    // initialize objects with regular syntax
    Player frank {"Frank", 200, 3};
    cout << frank.get_name() << endl;
    return 0;
    
}