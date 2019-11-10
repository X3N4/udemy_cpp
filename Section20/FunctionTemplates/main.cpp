#include <iostream>
#include <string>

template <typename T>
T min (T a, T b){
    // Problem with own classes when < is not implemented
    return (a < b) ? a : b;
}


// need to overload stream insertion for custom classes
template <typename T1, typename T2>
void show(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct Person {
    std::string name;
    int age; 
    
    // no need for friends, everything in struct is public
    
    // has to be overloaded as member function
    // note the placement of &
    bool operator< (const Person &other) const {
        return this->age < other.age; // need to use this-> as this is a POINTER to the current object
    }
};


std::ostream &operator<< (std::ostream &stream, const Person &p){
    return stream << p.name;
}

template <typename T>
void myswap(T &lhs, T &rhs){
    T temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main(){
    
    int x {100};
    int y {200};
    myswap(x, y);
    std::cout << x << " " << y << std::endl;
    
    
    Person p1 {"Oscar", 11};
    Person p2 {"Jacques", 4};
    Person p3 {min(p1, p2)};
    // works due to overloaded stream insertion
    std::cout << p3 << " is younger." << std::endl;
    
    
    
    std::cout << min<int>(2, 3) << std::endl;
    std::cout << min(2, 3) << std::endl;
    std::cout << min('A', 'B') << std::endl;
    std::cout << min(12.5, 9.2) << std::endl;
    std::cout << min(5 + 2*2, 7 + 40) << std::endl;
    // std::cout << min(4, 3.5) << std::endl; // doesn't work with only one template type
    
    // all work
    show<int>(10, 20);
    show(10, 20);
    show<char, double>('A', 12.7);
    show('A', 12.7);
    show(1000, "Testing");
    show(1000, std::string {"Power"});
    
    
    return 0;
    
}