#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d) {*data=d;}
    int get_data_value() {return *data;}
    // Constructor
    Move(int d);
    // Copy Constructor (deep copy)
    Move(const Move &source);
    // Move Constructor (can't throw exceptions)
    Move (Move &&source) noexcept;
    // Destructor
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
}

// Copy constructor using delegation (deep copy)
Move::Move(const Move &source)
    :Move{*source.data}{
        cout << "Move copy" << endl;
    }


// Move constructor: Do shallow copy and then null out source pointer    
Move::Move(Move &&source) noexcept
    :data{source.data}{
        source.data = nullptr;
        cout << "Moved resources" << endl;
    }
    
Move::~Move(){
    if (data != nullptr){
        cout << "Destructor frees data for: " << *data << endl;
    } else {
        cout << "Destructor freeing nullptr" << endl;
    }
    delete data;
}

void display_Move(Move s){
    cout << s.get_data_value() << endl;
}

int main(){
    vector <Move> vec;
    // without move -> creates 15 deep copies
    // with move -> creates 0 deep copies, just moves resources
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    
    return 0;
    
}